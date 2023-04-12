#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, cnt = 0, ans = 0;
    cin >> n;
    string a;
    cin >> a;
    vector<ll> end(n), front(n);
    vector<ll> vis(26, 0);
    for (ll i = 0; i < n; i++)
    {
        if (vis[a[i] - 'a'] == 0)
        {
            cnt++;
            front[i] = cnt;
            vis[a[i] - 'a'] = 1;
        }
        else
        {
            front[i] = cnt;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        vis[i] = 0;
    }
    cnt = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (vis[a[i] - 'a'] == 0)
        {
            cnt++;
            end[i] = cnt;
            vis[a[i] - 'a'] = 1;
        }
        else
        {
            end[i] = cnt;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        vis[i] = 0;
    }
    cnt = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ans = max(ans, front[i] + end[i + 1]);
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     cout << front[i] << endl;
    // }
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
