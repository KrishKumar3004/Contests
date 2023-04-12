#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, ans = 0, cnt = 0, totalcnt = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
        else
        {
            ll x = 0;
            if (totalcnt == 0 && cnt == 0)
            {
                continue;
            }
            else if (totalcnt == 0)
            {
                x = cnt;
                ans = max(ans, x);
            }
            else
            {
                x = (totalcnt / 2) + 1 + cnt;
                ans = max(ans, x);
            }

            totalcnt += cnt;
            cnt = 0;
            // cout << totalcnt << " " << ans << endl;
        }
        // cout << cnt << endl;
    }
    ll x = 0;
    if (totalcnt == 0)
        ans = max(ans, cnt);
    else
        ans = max(ans, (totalcnt / 2) + 1 + cnt);
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
