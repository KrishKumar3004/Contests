#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, x;
    cin >> n >> m;
    vector<ll> ans(n, -1), vis(100000, 0);
    ll ptr = 0, id = n - 1;
    for (ll i = 0; i < m; i++)
    {
        cin >> x;
        if (id > -1)
        {
            if (vis[x] == 0)
                ans[id--] = ++ptr, vis[x] = 1;
            else
                ptr++;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
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
