#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, mxi = 0, ans = 0;
    cin >> n;
    vector<ll> a(n), mx(n);
    map<ll, ll> index;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        index[a[i]] = i;
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        mxi = max(mxi, a[i]);
        mx[i] = mxi;
    }
    ll prev = 0, i = 1;
    while (i < n)
    {
        ll x = index[mx[i]];
        // cout << x << " " << mx[i] << endl;
        ans += (x - prev) * mx[i];
        prev = x;
        i = x + 1;
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
