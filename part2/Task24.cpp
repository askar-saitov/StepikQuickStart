// Part2Task24.cpp - Задано целое число N (4 <= N <= 10^6)
// Найти сумму наименьших простых делителей всех составных чисел,
// больших 2 и не превосходящих N.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<bool> arr(n+1); // элемент занимает 1 байт
	int k = 2; // начинаем с двойки
	while (k * k <= n) // традиционный алгоритм решета
	{
		for (int i = k * k; i <= n; i += k)
			if (arr[i] != 1) arr[i] = 1; // вычёркиваем из простых
		for (int i = k + 1; i <= n; i++) // найти след. непустую позицию
			if (arr[i] != 1) { k = i; break; }
	}
    //for (auto b : arr) cout << b;
	unsigned long int acc = 0;
	for (int i = 3; i <= n; i++) {
		if (arr[i])
			for (int j=2; j<=i; j++)
				if (i%j == 0) {
					acc += j; break;
				}
		//cout << i << '\t' << arr[i] << endl;
	}
	cout << acc;
}