#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll convert(ll a)
{
    int ans = 0;
    while (a)
    {
        ans += (a % 10);
        a /= 10;
    }
    return ans;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 9)
            s.insert(i);
    }
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll l, r;
            cin >> l >> r;
            ll prev = l - 1;
            while (true)
            {
                auto ub = s.upper_bound(prev);
                if (ub == s.end())
                    break;
                prev = *ub;
                if (*ub >= r)
                    break;
                else
                {
                    a[*ub] = convert(a[*ub]);
                    if (a[*ub] <= 9)
                    {
                        s.erase(*ub);
                    }
                }
            }
            if (a[l - 1] > 9)
            {
                a[l - 1] = convert(a[l - 1]);
                if (a[l - 1] <= 9)
                    s.erase(l - 1);
            }
        }
        else
        {
            ll x;
            cin >> x;
            cout << a[x - 1] << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
