/* Во входном файле заданы два целых числа A и B, не превосходящие 10^5.
Вычислите остаток от деления разности a^2-b^2 на 10^6+7.
Sample Input 1:
3 2
Sample Output 1 :
5
Sample Input 2 :
1000 1001
Sample Output 2 :
998006
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, k = 1000007; cin >> a >> b;
	int r = a * a - b * b;
	if (r < 0) {
		r = ((r%k)+k)%k;
	}
	else {
		r %= k;
	}
	cout << r << endl;
}