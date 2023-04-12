#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    vector<ll> a(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    ll mx = *min_element(a.begin(), a.end()), ans = 0;
    for (ll i = 0; i < 4; i++)
    {
        ans += a[i] - mx;
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
