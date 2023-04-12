#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, w, h, mn = -99999999999, mx = 99999999999;
    cin >> n >> w >> h;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll x = (a[i] - w) - (b[i] - h);
        // if (x >= 0)
        mn = max(mn, x);
        // else
        //     mx = min(mx, (-1LL) * x);
        ll y = (a[i] + w) - (b[i] + h);
        // if (y >= 0)
        mx = min(mx, y);
        // else
        //     mn = max(mn, (-1LL) * y);
        // cout << x << " " << y << endl;
    }
    // cout << mx << " " << mn << endl;
    if (mn <= mx)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
