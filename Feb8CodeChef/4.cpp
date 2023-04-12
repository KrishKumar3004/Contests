#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m, sum = 0;
    cin >> n >> m;
    vector<ll> a(n + 1, 0);
    for (ll i = 0; i < m; i++)
    {
        ll p, t;
        cin >> p >> t;
        a[p] = a[p] + t;
        sum += a[p];
        cout << sum << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
