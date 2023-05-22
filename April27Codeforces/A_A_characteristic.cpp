#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll ans = -1;
    for (ll i = 1; i <= n; i++)
    {
        if ((2 * i * i) - (2 * n * i) + (n * n - n - 2 * x) == 0)
        {
            ans = i;
        }
    }
    if (ans == -1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (ll i = 0; i < ans; i++)
    {
        cout << 1 << " ";
    }
    for (ll i = 0; i < n - ans; i++)
    {
        cout << -1 << " ";
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
