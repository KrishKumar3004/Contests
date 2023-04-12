#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, res;
    cin >> n >> m;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] += (m + 1);
    }
    for (ll i = 0; i < m; i++)
    {
        ll p, v;
        cin >> p >> v;
        mp[a[p - 1]] -= (m - i);
        a[p - 1] = v;
        mp[v] += (m - i);
    }
    res = n * m * (m + 1);
    for (auto it : mp)
    {
        res -= (it.second * (it.second - 1)) / 2;
    }
    cout << res << endl;
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
