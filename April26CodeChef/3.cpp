#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353

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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] == i + 1 && sum == ((i + 1) * (i + 2)) / 2)
        {
            cout << i << endl;
            cnt++;
        }
    }
    ll ans = binpow(2, cnt);
    if (cnt == n)
    {
        ans = (ans - 1 + mod) % mod;
    }
    cout << ans << endl;
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
