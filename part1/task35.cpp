#include <iostream>
using namespace std;

int n;

void check(int d, int a[]) {
    int l = -1, r = n, mid;
    while ((l+1) < r) {
        mid = (l+r) / 2;
        if (a[mid] == d) {
            while (mid < n-1 && a[mid] == d) {
                mid++;
                if (a[mid] > d) { cout << a[mid] << endl; return ; }
            }
            cout << "NO SOLUTION" << endl; return ;
		}
        if (a[mid] < d) l = mid; else r = mid;
	}
    if (r == n)
        cout << "NO SOLUTION" << endl;
    else
        cout << a[r] << endl;
	return ;
}

int main() {
	int m, t; cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> t; a[i] = t;
	}
	for (int i = 0; i < m; i++) {
		cin >> t; check(t, a);
	}
	return 0;
}
