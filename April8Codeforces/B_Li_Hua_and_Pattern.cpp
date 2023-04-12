#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    ll cnt = 0;
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (v[i][j] != v[n - i - 1][n - j - 1])
            {
                cnt++;
            }
        }
    }
    if (n % 2 == 1)
    {
        for (ll i = 0; i < n / 2; i++)
        {
            if (v[n / 2][i] != v[n / 2][n - i - 1])
            {
                cnt++;
            }
        }
    }
    if (cnt <= k && (k - cnt) % 2 == 0 && n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else if (cnt <= k && n % 2 == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
