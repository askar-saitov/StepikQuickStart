#include <iostream>
#include <math.h>
#include <iomanip>  

using namespace std;

const long double EPS = 1e-9;
int n;

long double f(long double x, int p[]) {
	long double r = p[n], px = x;
	for (int i=n-1; i>=0; i--) {
		r += p[i]*px;
		px *= x;
	}
	return r;
}

long double findRoot(long double l, long double r, int p[]) {
	long double mid;
	while ( fabs(r-l) > EPS) {
		mid = (l+r) / 2.0;
		if (f(mid, p) < 0.0) l = mid; else r = mid;
	}
	return (l+r) / 2.0;
}

int main() {
    cin >> n; int a[n+1];
	for (int i = 0; i <= n; i++) { cin >> a[i]; }
	
	long double start = 0.0, finish = 0.0;
	long double mn = f(start, a);
	if (mn < 0) {
		for (finish = start; finish<51.0; finish += 0.5)
			if (f(start, a) > 0) break;
	}
	else {
		for (finish = start; finish>-51.0; finish -= 0.5)
			if (f(start, a) < 0) break;
	}
	if (finish < start) {
		long double tmp = finish; finish = start; start = tmp;
	}
	long double res = findRoot(start, finish, a);
	cout << setprecision(16) << res << endl;
	return 0;	
}
/*
5
42 -20 -38 -38 2 -38
-----
1.5636953517814676
1.56369535203703
с точностью до 10^-6
*/