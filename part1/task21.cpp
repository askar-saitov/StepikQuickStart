#include <iostream>
using namespace std;

int main() {
	int n, d;
	unsigned long int acc = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d;
		acc += d;
	}
	std::cout << acc;
}