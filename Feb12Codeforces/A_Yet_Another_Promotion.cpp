#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, a, b;
    cin >> a >> b;
    cin >> n >> m;
    ll x = a * m;
    ll cost = (n / (m + 1)) * x + min(a * (n % (m + 1)), b * (n % (m + 1)));
    // cost = min(cost, a * n);
    cout << min(b * n, cost) << endl;
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
