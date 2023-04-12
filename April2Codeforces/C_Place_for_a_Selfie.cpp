#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (ll i = 0; i < m; i++)
    {
        ll a, b, c, ans1 = -1, ans2 = -1, ans3 = -1;
        cin >> a >> b >> c;
        if (c < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        ll small = sqrtl(4 * a * c) + b;
        ll large = -sqrtl(4 * a * c) + b;
        ll id = upper_bound(arr.begin(), arr.end(), small) - arr.begin();
        if (id != n && arr[id] < large)
        {
            ans1 = arr[id];
            if ((b - ans1) * (b - ans1) - 4 * a * c < 0)
            {
                cout << "YES" << endl;
                cout << ans1 << endl;
                continue;
            }
        }
        id = upper_bound(arr.begin(), arr.end(), large) - arr.begin();
        if (id != n)
        {
            ans2 = arr[id];
            if ((b - ans2) * (b - ans2) - 4 * a * c < 0)
            {
                cout << "YES" << endl;
                cout << ans2 << endl;
                continue;
            }
        }
        id = lower_bound(arr.begin(), arr.end(), small) - arr.begin();
        if (id - 1 != -1)
        {
            ans3 = arr[id - 1];
            if ((b - ans3) * (b - ans3) - 4 * a * c < 0)
            {
                cout << "YES" << endl;
                cout << ans3 << endl;
                continue;
            }
        }
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
