#include <iostream>
using namespace std;

int n;

void check(int d, int a[]) {
    int l = -1, r = n, mid;
    while ((l+1) < r) {
        mid = (l+r) / 2;
        if (a[mid] == d) {
			cout << d << '\n'; return ;
		}
        if (a[mid] < d) {
			l = mid;
		}
        else {
			r = mid;
		}
	}
    if (r == n)
        cout << "NO SOLUTION\n";
    else
        cout << a[l+1] << '\n';
	return ;
}

int main() {
	int m, t; cin >> n; cin >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> t; a[i] = t;
	}
	for (int i = 0; i < m; i++) {
		cin >> t; check(t, a);
	}
}