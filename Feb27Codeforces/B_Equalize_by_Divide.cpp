#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll, ll>> ans;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll i = 0;
    bool flag = true;
    while (true)
    {
        auto mxit = max_element(a.begin(), a.end());
        ll mxid1 = mxit - a.begin();
        ll mx1 = a[mxid1];

        auto mnit = min_element(a.begin(), a.end());
        ll mnid = mnit - a.begin();

        if (a[mnid] == a[mxid1])
        {
            break;
        }
        if (a[mnid] == 1)
        {
            flag = false;
            break;
        }

        ll mxid2 = mnid;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != mx1 && a[i] > a[mxid2])
            {
                mxid2 = i;
            }
        }
        ans.push_back({mxid1 + 1, mxid2 + 1});
        a[mxid1] = (a[mxid1] + a[mxid2] - 1) / a[mxid2];
    }
    // for (auto it : a)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    if (flag == false)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
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
