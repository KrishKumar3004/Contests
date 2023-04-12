#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, sum = 0, cnt = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            a[i] = a[i] * (-1);
            cnt++;
        }
        sum += a[i];
    }
    sort(a.begin(), a.end());
    if (cnt % 2 == 1)
    {
        sum = sum - (2) * a[0];
    }
    cout << sum << endl;
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
