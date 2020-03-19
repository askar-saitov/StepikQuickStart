#include <iostream>
using namespace std;
typedef unsigned long long ull;

ull nod(ull a, ull b) {
	return b? nod(b, a%b): a;
}

int main() {
	ull a, b, r;
	cin >> a >> b;
	r = a / nod(a,b) * b;
	if (r > 1e18)
		cout << -1;
	else
		cout << r;
}