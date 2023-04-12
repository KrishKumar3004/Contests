#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, sum = 0, sm = 0;
    cin >> n;
    vector<ll> a(2 * n);
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        sum += abs(a[i] + 1);
        sm += abs(a[i]);
    }
    ll ans = sm;
    if (n == 1)
    {
        cout << abs(a[0] - a[1]) << endl;
        return;
    }
    if (n == 2)
    {
        ll dr = 0;
        for (ll i = 0; i < 2 * n; i++)
        {
            dr += abs(a[i] - 2);
        }
        ans = min(ans, dr);
    }
    if (n % 2 == 0)
    {
        for (ll i = 0; i < 2 * n; i++)
        {
            ll x = sum + abs(a[i] - n) - abs(a[i] + 1);
            ans = min(ans, x);
        }
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
