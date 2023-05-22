#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll mx = 0, id = -2;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= t)
        {
            if (b[i] > mx)
            {
                mx = b[i];
                id = i;
            }
        }
    }
    cout << id + 1 << endl;
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
