#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353

ll fact[300005];

ll binpow(long long x, ll y, ll p)
{
    ll res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

ll NCR(ll n, ll r)
{
    if (n == r)
        return 1LL;
    if (r == 0 && n != 0)
        return 1LL;
    else
    {
        ll res = fact[n];
        res = (res * (binpow(fact[r] * fact[n - r], mod - 2LL, mod))) % mod;
        return res;
    }
}

void solve()
{
    ll n, res;
    cin >> n;
    ll t = n / 3LL;
    res = NCR(t, t / 2LL);
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i += 3)
    {
        vector<ll> b(3);
        b[0] = a[i], b[1] = a[i + 1], b[2] = a[i + 2];
        sort(b.begin(), b.end());
        ll x = 1;
        if (b[0] == b[1])
        {
            x = 2;
            if (b[1] == b[2])
            {
                x = 3;
            }
        }
        res = (res * x) % mod;
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll res = 1;
    fact[0] = 1;
    for (ll i = 1; i < 300005; i++)
    {
        res = (res * i) % mod;
        fact[i] = res;
    }
    solve();
    return 0;
}
