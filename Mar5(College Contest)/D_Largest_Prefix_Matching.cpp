#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> perms(n, vector<ll>(m, 0));
    set<vector<ll>> avail;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> perms[i][j];
        }
        vector<ll> temp;
        for (ll k = 1; k <= m; k++)
        {
            temp = perms[i];
            for (ll l = 0; l < m; l++)
            {
                if (perms[i][l] > k)
                {
                    temp[l] = -1;
                }
            }
            avail.insert(temp);
        }
    }
    // for (auto it : avail)
    // {
    //     for (auto itt : it)
    //     {
    //         cout << itt << " ";
    //     }
    //     cout << endl;
    // }
    for (ll i = 0; i < n; i++)
    {
        vector<ll> reqd(m);
        for (ll j = 0; j < m; j++)
        {
            reqd[perms[i][j] - 1] = j + 1;
        }
        vector<ll> temp;
        ll ans = 0;
        for (ll k = 1; k <= m; k++)
        {
            temp = reqd;
            for (ll l = 0; l < m; l++)
            {
                if (reqd[l] > k)
                {
                    temp[l] = -1;
                }
            }
            if (avail.count(temp))
            {
                ans = max(ans, k);
            }
        }
        cout << ans << " ";
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
