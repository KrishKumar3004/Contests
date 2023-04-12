#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, c, sum = 0, cnt = 0;
    cin >> n >> c;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += (i + 1);
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        if (sum + a[i] > c)
        {
            break;
        }
        else
        {
            sum += a[i];
            cnt++;
        }
    }
    cout << cnt << endl;
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
