#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll a, b, c, d, ans = -1;
    cin >> a >> b >> c >> d;
    if (c <= a && d >= b)
    {
        ans = (a - c) + (d - b) * 2;
    }
    else if (c >= a && b + (c - a) <= d)
    {
        ans = (c - a) + (d - b - c + a) * 2;
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
