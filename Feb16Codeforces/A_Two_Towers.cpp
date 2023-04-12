#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, cnt = 0;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cnt++;
        }
    }
    for (ll i = 0; i < m - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (cnt == 1 && b[m - 1] == a[n - 1])
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
