#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll INF = 1e18;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, INF));
    dp[0][0] = 0;
    vector<ll> p(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    vector<ll> h(k + 1), c(k + 1);
    for (ll i = 1; i <= k; i++)
    {
        cin >> c[i];
    }
    for (ll i = 1; i <= k; i++)
    {
        cin >> h[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (dp[i][j] == INF)
                continue;
            ll mx = max(i, j);
            if (p[i] == p[mx + 1])
            {
                dp[mx + 1][j] = min(dp[mx + 1][j], h[p[mx + 1]] + dp[i][j]);
            }
            else
            {
                dp[mx + 1][j] = min(dp[mx + 1][j], c[p[mx + 1]] + dp[i][j]);
            }
            if (p[j] == p[mx + 1])
            {
                dp[i][mx + 1] = min(dp[i][mx + 1], h[p[mx + 1]] + dp[i][j]);
            }
            else
            {
                dp[i][mx + 1] = min(dp[i][mx + 1], c[p[mx + 1]] + dp[i][j]);
            }
        }
    }
    ll ans = INF;
    for (ll i = 0; i < n; ++i)
    {
        ans = min({ans, dp[i][n], dp[n][i]});
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
