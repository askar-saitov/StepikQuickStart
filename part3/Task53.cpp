#include <iostream>
#include <vector>
using namespace std;
typedef unsigned short int usi;
typedef vector<usi> vi;
typedef vector<vector<usi>> vi2;

int main()
{
	int s, n; cin >> s >> n;
	vector<int> w(n + 1); // 100000
	for (int i = 1; i <= n; i++) cin >> w[i];

	vector<vector<char>> z;
	for (int i = 0; i < 2; i++)
		z.push_back(vector<char>(s + 1, 0));

	char ng = 0, vg = 1;

	vector<vi2> t;
	for (int i = 0; i < 2; i++) {
		vi2 tmp;
		for (int j = 0; j < s + 1; j++)
			tmp.push_back(vi(1, 0));
		t.push_back(tmp);
	}
	
	z[0][0] = 1;
	ng = 0; vg = 1 - ng;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (w[i] <= j)
				if (z[ng][j] > 0) {
					z[vg][j] = 1;
					t[vg][j] = t[ng][j];
				}
				else {
					z[vg][j] = z[ng][j - w[i]];
					t[vg][j] = t[ng][j - w[i]];
					t[vg][j].push_back(i);
				}
			else {
				z[vg][j] = z[ng][j];
				t[vg][j] = t[ng][j];
			}
		}
		ng = 1 - ng; vg = 1 - ng;
	}
	//cout << "\n=====================\n";
	vg = 1 - vg;
	for (int j = s; j >= 0; j--)
		if (z[vg][j] > 0) {
			cout << j << " " << t[vg][j].size() - 1 << endl;
			for (int i = 1; i < t[vg][j].size(); i++) {
				cout << t[vg][j][i] << " ";
			}
			break;
		}
	//cout << "\n=====================\n";
	//for (int j = 0; j < n + 1; j++) cout << w[j] << " "; cout << '\n';
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < s + 1; j++)
	//		cout << (z[i][j] == 0? '0': '1') << " ";
	//	cout << endl;
	//}
	//cout << "\n=======================\n";
}








// такое решение даёт: Memory limit exceeded
//#include <iostream>
//#include <vector>
//using namespace std;
//typedef unsigned short int usi;
//typedef vector<usi> vi;
//typedef vector<vector<usi>> vi2;
//
//int main()
//{
//	int s, n; cin >> s >> n;
//	vector<int> w(n + 1); // 100000
//	for (int i = 1; i <= n; i++) cin >> w[i];
//
//	vector<vector<char>> z;
//	for (int i = 0; i < n + 1; i++)
//		z.push_back(vector<char>(s + 1, 0));
//
//	vector<vi2> t;
//	for (int i = 0; i < n + 1; i++) {
//		vi2 tmp;
//		for (int j = 0; j < s + 1; j++)
//			tmp.push_back(vi(1, 0));
//		t.push_back(tmp);
//	}
//
//	z[0][0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= s; j++) {
//			if (w[i] <= j)
//				if (z[i - 1][j] > 0) {
//					z[i][j] = 1;
//					t[i][j] = t[i - 1][j];
//				}
//				else {
//					z[i][j] = z[i - 1][j - w[i]];
//					t[i][j] = t[i - 1][j - w[i]];
//					t[i][j].push_back(i);
//				}
//			else {
//				z[i][j] = z[i - 1][j];
//				t[i][j] = t[i - 1][j];
//			}				
//		}
//	}
//
//	for (int j = s; j >= 0; j--)
//		if (z[n][j] > 0) {
//			cout << j << " " << t[n][j].size()-1 << endl;
//			for (int i = 1; i < t[n][j].size(); i++) {
//				cout << t[n][j][i] << " ";
//			}
//			return 0;
//		}
//}



/*
Рюкзак3
У вас есть n слитков золота, каждый имеет свой вес. 
Также у вас есть рюкзак вместимости S. 
Необходимо вычислить максимальный вес, который вы можете с собой унести. 
Вы не можете дробить слитки. 
Входные данные
В первой строке записано два целых числа S и N (1<=S<=10^4; 1≤N≤300). 
Во второй строке записаны n целых чисел - веса слитков. 
Каждый слиток имеет неотрицательный вес, не превосходящий 10^5. 
Выходные данные 
В первой строке выведите два числа - максимальный суммарный вес, 
который вы можете унести, а также необходимое для этого количество камней. 
Во второй строке выведите номера камней, которые вы хотите взять с собой. Камни нумеруются с 11 в том порядке, в котором они даны во входных данных. 
Если есть несколько способов унести найденный вес, выведите любой. 
Sample Input 1:
10 6
2 3 4 4 6 9
Sample Output 1:
10 3
1 3 4
==========
Sample Input 2:
10 6
1 1 1 1 1 1
Sample Output 2:
6 6
1 2 3 4 5 6
*/