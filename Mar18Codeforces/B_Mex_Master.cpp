#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, cnt0 = 0, cnt1 = 0;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            cnt0++;
        else if (a[i] == 1)
            cnt1++;
    }
    if (cnt0 <= n - cnt0 + 1)
    {
        cout << 0 << endl;
        return;
    }
    else if (cnt0 + cnt1 == n && cnt1 != 0)
    {
        cout << 2 << endl;
        return;
    }
    else if (cnt0 + cnt1 == n && cnt1 == 0)
    {
        cout << 1 << endl;
        return;
    }
    cout << 1 << endl;
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
