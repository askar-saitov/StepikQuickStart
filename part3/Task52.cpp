#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int s, n; cin >> s >> n;
	vector<int> w(n+1);
	for (int i = 1; i <= n; i++) cin >> w[i];

	vector<vector<int>> z;
	for (int i = 0; i < n + 1; i++)
		z.push_back(vector<int>(s+1, 0));

	z[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (w[i] <= j)
				z[i][j] = z[i - 1][j] || z[i - 1][j - w[i]];
			else
				z[i][j] = z[i - 1][j];
		}
	}

	for (int j = s; j >= 0; j--)
		if (z[n][j] > 0) {
			cout << j << endl;
			return 0;
		}
}