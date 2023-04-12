#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, cnt2 = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> front(n), end(n);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            cnt2++;
            // cout << front[i] << " ";
        }
        front[i] = cnt2;
    }
    cnt2 = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 2)
        {
            cnt2++;
            // cout << end[i] << " ";
        }
        end[i] = cnt2;
    }
    for (ll i = 0; i < n; i++)
    {
        if (front[i] == end[i + 1])
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
