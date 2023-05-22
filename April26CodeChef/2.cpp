#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void solve()
{
    ll x;
    cin >> x;
    if (x == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (x <= 1000000)
    {
        cout << 1 << " " << 1 << " " << x - 1 << endl;
        return;
    }
    string str = to_string(x);
    ll n = str.length();
    ll power = n / 2;
    ll a = binpow(10, power);
    ll b = x / a;
    ll r = x % a;
    if (r == 0)
    {
        r = a;
        b--;
    }
    cout << a << " " << b << " " << r << endl;
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