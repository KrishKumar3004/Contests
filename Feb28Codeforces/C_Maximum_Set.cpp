#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353

void solve()
{
    ll l, r, ans = 0, res = -1;
    cin >> l >> r;
    ll n = log2(r / l);
    cout << n + 1 << " ";
    ll x = r / (1 << n);
    ll low = l, high = x, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mid * (1 << (n - 1)) * 3 <= r)
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ans = (x - l + 1) % mod;
    if (res != -1)
    {
        ans = (ans + ((res - l + 1) % mod * n) % mod) % mod;
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
