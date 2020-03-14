#include <iostream>
using namespace std;

int n;

void check(int d, int a[]) {
    int l = 0, r = n-1, mid;
    while (l+1 < r) {
        mid = (l+r) / 2;
        if (a[mid] == d) {
            while (mid > 0 && a[mid] == d) {
                if (a[--mid] > d) { cout << mid+1+1 << endl; return ; }
            }
            cout << mid+1 << endl; return ;
        }
        else
            if (a[mid] > d) l = mid; else r = mid;
	}
	if (a[l] <= d) { cout << l+1 << endl; return; }
	else
        if (a[r] <= d) { cout << r+1 << endl; return; }
        else
            { cout << "NO SOLUTION" << endl; return ; }
}

int main() {
	int m, t; cin >> n >> m; int a[n];
	for (int i = 0; i < n; i++) { cin >> t; a[i] = t; }
	for (int i = 0; i < m; i++) { cin >> t; check(t, a); }
}
