#include <iostream>
using namespace std;

int main() {
	int count, max = 0, maxi = 0, tmp;
	cin >> count;
	int arr[count];
	for (int i = 0; i < count; i++) {
		cin >> tmp;
		arr[i] = tmp;
	}
	for (int i = 0; i < count; i++) {
		if (arr[i] > max) {
			max = arr[i]; maxi = i;
		}
	}
	std::cout << maxi+1;
}