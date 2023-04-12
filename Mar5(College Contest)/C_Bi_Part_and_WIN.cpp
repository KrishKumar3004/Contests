#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

vector<ll> vis(200001);
vector<ll> adj[200001];
vector<ll> ans(200001);

void dfs(ll node, ll s)
{
    vis[node] = 1;
    if (s == 1)
    {
        ans[node] = 1;
    }
    for (auto it : adj[node])
    {
        if (vis[it] == 0)
        {
            dfs(it, 1 - s);
        }
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        ans[i] = 0;
    }
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0);
    ll cnt1 = 0, cnt0 = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (ans[i] == 1)
            cnt1++;
        else
            cnt0++;
    }
    if (cnt1 < cnt0)
    {
        cout << cnt1 << endl;
        for (ll i = 1; i <= n; i++)
        {
            if (ans[i] == 1)
                cout << i << " ";
        }
    }
    else
    {
        cout << cnt0 << endl;
        for (ll i = 1; i <= n; i++)
        {
            if (ans[i] == 0)
                cout << i << " ";
        }
    }
    cout << endl;
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
