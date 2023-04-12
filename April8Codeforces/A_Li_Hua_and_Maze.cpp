#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, ans = 4;
    cin >> n >> m;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == 1 && b == 1) || (a == 1 && b == m) || (a == n && b == 1) || (a == n && b == m))
    {
        ans = min(2LL, ans);
    }
    if ((c == 1 && d == 1) || (c == 1 && d == m) || (c == n && d == 1) || (c == n && d == m))
    {
        ans = min(2LL, ans);
    }
    if (a == 1 || b == 1 || a == n || b == m)
    {
        ans = min(3LL, ans);
    }
    if (c == 1 || d == 1 || c == n || d == m)
    {
        ans = min(3LL, ans);
    }
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
