#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(ll p)
{
    ll n;
    bool flag = true;
    cin >> n;
    map<ll, ll> vis;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0 && a[i - 1] != a[i] && vis[a[i]] == 1)
        {
            // cout << i << endl;
            flag = false;
        }
        vis[a[i]] = 1;
    }
    if (!flag)
    {
        cout << "Case "
             << "#" << p << ": "
             << "IMPOSSIBLE" << endl;
        return;
    }
    cout << "Case "
         << "#" << p << ": ";
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i]] == 0)
        {
            cout << a[i] << " ";
            m[a[i]] = 1;
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test, p = 1;
    cin >> test;
    while (test--)
    {
        solve(p);
        p++;
    }
    return 0;
}
