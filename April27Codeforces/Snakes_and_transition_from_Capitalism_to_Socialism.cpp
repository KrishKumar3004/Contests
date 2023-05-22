#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, mx = 0, ans = 0;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }
    queue<pair<ll, ll>> q;
    vector<vector<ll>> cnt(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == mx)
            {
                q.push({i, j});
                cnt[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();
        if (x - 1 >= 0 && a[x - 1][y] != mx)
        {
            a[x - 1][y] = mx;
            q.push({x - 1, y});
            cnt[x - 1][y] = cnt[x][y] + 1;
            ans = max(ans, cnt[x - 1][y]);
        }
        if (x + 1 < n && a[x + 1][y] != mx)
        {
            a[x + 1][y] = mx;
            q.push({x + 1, y});
            cnt[x + 1][y] = cnt[x][y] + 1;
            ans = max(ans, cnt[x + 1][y]);
        }
        if (y - 1 >= 0 && a[x][y - 1] != mx)
        {
            a[x][y - 1] = mx;
            q.push({x, y - 1});
            cnt[x][y - 1] = cnt[x][y] + 1;
            ans = max(ans, cnt[x][y - 1]);
        }
        if (y + 1 < m && a[x][y + 1] != mx)
        {
            a[x][y + 1] = mx;
            q.push({x, y + 1});
            cnt[x][y + 1] = cnt[x][y] + 1;
            ans = max(ans, cnt[x][y + 1]);
        }
        if (x + 1 < n && y + 1 < m && a[x + 1][y + 1] != mx)
        {
            a[x + 1][y + 1] = mx;
            q.push({x + 1, y + 1});
            cnt[x + 1][y + 1] = cnt[x][y] + 1;
            ans = max(ans, cnt[x + 1][y + 1]);
        }
        if (x - 1 >= 0 && y - 1 >= 0 && a[x - 1][y - 1] != mx)
        {
            a[x - 1][y - 1] = mx;
            q.push({x - 1, y - 1});
            cnt[x - 1][y - 1] = cnt[x][y] + 1;
            ans = max(ans, cnt[x - 1][y - 1]);
        }
        if (x + 1 < n && y - 1 >= 0 && a[x + 1][y - 1] != mx)
        {
            a[x + 1][y - 1] = mx;
            q.push({x + 1, y - 1});
            cnt[x + 1][y - 1] = cnt[x][y] + 1;
            ans = max(ans, cnt[x + 1][y - 1]);
        }
        if (x - 1 >= 0 && y + 1 < m && a[x - 1][y + 1] != mx)
        {
            a[x - 1][y + 1] = mx;
            q.push({x - 1, y + 1});
            cnt[x - 1][y + 1] = cnt[x][y] + 1;
            ans = max(ans, cnt[x - 1][y + 1]);
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
