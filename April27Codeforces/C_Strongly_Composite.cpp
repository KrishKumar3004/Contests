#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> prime;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (ll i = 2; i * i <= x; i++)
        {
            while (x % i == 0)
            {
                x = x / i;
                prime[i]++;
            }
        }
        if (x > 1)
        {
            prime[x]++;
        }
    }

    ll ans = 0, left = 0;
    for (auto it : prime)
    {
        ans += it.second / 2;
        left += it.second % 2;
    }
    ans += left / 3;
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
