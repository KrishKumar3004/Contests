#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    if (a > n / 2)
    {
        a = n - a + 1;
    }
    if (b > n / 2)
    {
        b = n - b + 1;
    }
    if (c > n / 2)
    {
        c = n - c + 1;
    }
    if (d > n / 2)
    {
        d = n - d + 1;
    }
    if (a > b)
    {
        swap(a, b);
    }
    if (c > d)
    {
        swap(c, d);
    }
    // out << a << b << c << d << endl;
    cout << abs(a - c) << endl;
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
