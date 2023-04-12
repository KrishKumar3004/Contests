#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, mn = 999999999999;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 2; j < n; j++)
        {
            ll t = (a[i] + a[j]) / 2;
            ll id = lower_bound(a.begin() + i + 1, a.begin() + j + 1, t) - a.begin();
            // cout << t << " " << a[id] << endl;
            ll x = abs(a[i] + a[j] - (2 * a[id]));
            ll y = abs(a[i] + a[j] - (2 * a[id - 1]));
            mn = min(mn, min(x, y));
        }
    }
    cout << mn << endl;
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
