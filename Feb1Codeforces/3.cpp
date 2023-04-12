#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll n, k, unq, mx = 0;
string a, b, unqc;

ll count(vector<ll> &vis)
{
    ll ans = 0, ii = 1;
    for (ll i = 0; i < n; i++)
    {
        // cout << vis[a[i] - 'a'] << endl;
        if (a[i] == b[i] || vis[a[i] - 'a'] == 1)
        {
            // cout << i << endl;
            ans += ii;
            ii++;
        }
        else
        {
            ii = 1;
        }
    }
    return ans;
}

void f(int pos, int cnt, vector<ll> &vis)
{
    // cout << pos << " " << cnt << endl;
    if (cnt > k)
        return;
    if (pos == unq)
    {
        if (cnt == k)
        {
            mx = max(mx, count(vis));
            // cout << "Printing" << mx << endl;
        }
        return;
    }
    f(pos + 1, cnt, vis);
    // cout << unqc[pos] << endl;
    vis[unqc[pos] - 'a'] = 1;
    f(pos + 1, cnt + 1, vis);
    vis[unqc[pos] - 'a'] = 0;
}

void solve()
{
    mx = 0;
    vector<ll> vis(26, 0);
    unqc.clear();
    cin >> n >> k;
    cin >> a >> b;
    set<char> s;
    for (auto it : a)
    {
        s.insert(it);
    }
    for (auto it : s)
    {
        unqc.push_back(it);
    }
    unq = unqc.size();

    k = min(k, unq);
    f(0, 0, vis);
    cout << mx << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
