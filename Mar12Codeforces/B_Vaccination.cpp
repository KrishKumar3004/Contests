#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k, d, w, ans = 0;
    cin >> n >> k >> d >> w;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0;
    while (i < n)
    {
        ll key = a[i] + w + d;
        auto it = min(a.end(), a.begin() + i + k);
        ll id = upper_bound(a.begin() + i, it, key) - a.begin();
        // cout << i << " " << id << endl;
        i = id;
        ans++;
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
