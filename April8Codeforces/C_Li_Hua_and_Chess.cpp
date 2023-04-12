#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll r = 1, c = 1;
    cout << "?"
         << " " << r << " " << c << endl;
    ll x, y, z;
    cin >> x;
    fflush(stdout) or cout.flush();
    r = min(n, x + 1), c = min(m, x + 1);
    cout << "?"
         << " " << r << " " << c << endl;
    cin >> y;

    fflush(stdout) or cout.flush();
    if (n >= x & m >= x)
    {
        r = x + 1 - y, c = x + 1;
    }
    else if (n >= x & m < x)
    {
        r = x + 1, c = m - y;
    }
    else if (n < x & m >= x)
    {
        r = n - y, c = x + 1;
    }
    cout << "?"
         << " " << r << " " << c << endl;
    cin >> z;
    fflush(stdout) or cout.flush();
    if (z == 0)
    {
        cout << "!"
             << " " << r << " " << c << endl;
    }
    else
    {
        cout << "!"
             << " " << c << " " << r << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
