#include <iostream>
#include <vector>

// не проходит часть тестов - переполнение стека вызова рекурсивных функций
// #pragma comment(linker, "/STACK:1000000000") // это тоже не помоголо - нужно делать динамику

using namespace std;

    vector <int> a;
    vector <long> z;

int f(int i) {
    if (i<0) return 0;
    if (i==0) return 1;
    if (z[i] != -1) return z[i];
    if (a[i] == 1) return 0;
    else {
        z[i] = (f(i-1) + f(i-2) + f(i-3)) % 1000000007;
        return z[i];
    }
}

int main()
{
    int n; cin >> n;
    a.resize(n+1);
    z.assign(n+1, -1);
    string s; cin >> s;
    for (int i=1; i<=n; i++)
        a[i] = (int)s[i-1] - 48;
    // for (int i=0; i<=n; i++) cout << a[i] << " ";
    // cout << endl;
    cout << f(n) << endl;
    // for (int i=0; i<=n; i++) cout << z[i] << " ";
    return 0;
}