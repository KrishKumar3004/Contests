#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, d, mini = 999999999;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m), pos(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (ll i = 1; i < m; i++)
    {
        ll z = 99999999;
        if (d < n - 1)
            z = max(0LL, d - (pos[b[i]] - pos[b[i - 1]]) + 1);
        ll t = min(z, max(0LL, pos[b[i]] - pos[b[i - 1]]));
        if (t < mini)
        {
            mini = t;
        }
    }
    cout << mini << endl;
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
