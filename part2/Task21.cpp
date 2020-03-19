// Part2Task21.cpp - Последовательность Фибоначчи задаётся следующим образом:
// F(0)=F(1)=1, для всех N>1 F(N)=F(N-1)+F(N-2).
// Вам задано целое число N, 1<=N<=10^4. 
// Вычислите остаток от деления F(N) на  10^6 + 3.

#include <iostream>
using namespace std;

int main()
{
	int k = 1000003, n, r = 1, a = 1, b = 1; cin >> n;
	for (int i = 2; i <= n; i++) {
		r = (a + b) % k;
		a = b; b = r;
	}
	cout << r << endl;
}