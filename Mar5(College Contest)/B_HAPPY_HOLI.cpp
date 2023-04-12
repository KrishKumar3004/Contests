#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, ans = 0;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        ll cnt = 0;
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
                cnt++;
        }
        ll x = (1LL << cnt);
        ll y = (1LL << (m - cnt));
        ans += x;
        ans += y;
        ans -= 2;
    }
    for (ll i = 0; i < m; i++)
    {
        ll cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            if (a[j][i] == 1)
                cnt++;
        }
        ans += (1LL << cnt);
        ans += (1LL << (n - cnt));
        ans -= 2;
        ans -= n;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
