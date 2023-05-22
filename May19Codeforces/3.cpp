#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), even, odd;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    bool e = true, o = true;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            continue;
        }
        ll id = lower_bound(odd.begin(), odd.end(), a[i]) - odd.begin();
        if (id == 0)
        {
            e = false;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        ll id = lower_bound(odd.begin(), odd.end(), a[i]) - odd.begin();
        if (id == 0)
        {
            o = false;
            break;
        }
    }
    if (e || o)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
