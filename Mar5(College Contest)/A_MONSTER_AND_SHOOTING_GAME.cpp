#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, res = 0;
    cin >> n;
    vector<ll> a(n), ans(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        // cout << a[i + 1] << endl;
        if (a[i + 1] >= 1)
        {
            ans[i] = -1;
        }
        a[i] = max(a[i], a[i + 1] - 1);
    }
    for (auto it : ans)
    {
        if (it == 0)
        {
            res++;
        }
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
