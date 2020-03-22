#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int d = 1000000007;
    cin >> n >> k;

    vector<int> a(n+1); // конфигурация стенок
    vector<int> z(n+1); // кол-во путей до i-ой точки
    
    string s; cin >> s;
    for (int i = 1; i <= n; i++)
        a[i] = (int)s[i - 1] - 48;
    
    z[0] = 1;
    z[1] = 1L - a[1];

    int acc = z[0];
    for (int i = 2; i <= n; i++) {
        acc += z[i - 1];
        if (i > k) acc -= z[i - 1 - k];
        acc = ((acc % d) + d) % d;
        z[i] = a[i] == 1 ? 0 : acc;
    }

    cout << (z[n] < 0? 0: z[n]) << "\n";
}