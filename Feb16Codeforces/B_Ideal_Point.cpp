#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    bool left = false, right = false;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (l == k)
        {
            left = true;
        }
        if (r == k)
        {
            right = true;
        }
    }
    if (right == true && left == true)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
