#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int k = 1000000007;
    cin >> n;

    vector<int> a(n+1); // конфигурация стенок
    vector<long> z(n+1); // кол-во путей до i-ой точки
    
    string s; cin >> s;
    for (int i = 1; i <= n; i++)
        a[i] = (int)s[i - 1] - 48;
    
    z[0] = 1;
    z[1] = 1 - a[1];
    z[2] = a[2] == 1 ? 0 : (z[0] + z[1]);

    for (int i = 3; i <= n; i++) {
        z[i] = a[i] == 1 ? 0 : (z[i - 1] + z[i - 2] + z[i - 3]) % k;
    }

    cout << (z[n] < 0? 0: z[n]) << "\n";
}