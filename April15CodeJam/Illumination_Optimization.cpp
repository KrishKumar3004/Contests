#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(ll p)
{
    ll m, r, n;
    cin >> m >> r >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 999999999;
    for (ll i = 0; i < (1 << n); i++)
    {
        // cout << i << endl;
        ll prevc = 0;
        bool firstTime = true, flag = true, endcover = false, frontcover = false;
        for (ll j = 0; j < n; j++)
        {
            if (firstTime == true && i & (1 << j))
            {
                if (a[j] - r <= 0)
                {
                    frontcover = true;
                }
                if (a[j] + r >= m)
                {
                    endcover = true;
                }
                firstTime = false;
            }
            if (firstTime == false && i & (1 << j))
            {
                // cout << a[j] << " " << prevc << endl;
                if (a[j] - r > prevc + r)
                {
                    // cout << a[j] - r << prevc + r << endl;
                    flag = false;
                }
                if (a[j] + r >= m)
                {
                    // cout << "endcover" << i << endl;
                    endcover = true;
                }
                if (a[j] - r <= 0)
                {
                    // cout << "frontcover" << i << endl;
                    frontcover = true;
                }
                prevc = a[j];
            }
        }
        if (flag == true && endcover == true && frontcover == true)
        {
            // cout << i << endl;
            ll cnt = __builtin_popcount(i);
            ans = min(ans, cnt);
        }
    }
    if (ans == 999999999)
    {
        cout << "Case "
             << "#" << p << ": "
             << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << "Case "
             << "#" << p << ": "
             << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test, p = 1;
    cin >> test;
    while (test--)
    {
        solve(p);
        p++;
    }
    return 0;
}
