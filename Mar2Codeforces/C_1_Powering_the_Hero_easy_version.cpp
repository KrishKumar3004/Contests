#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);
    priority_queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            q.push(a[i]);
        }
        else if (a[i] == 0 && q.size() > 0)
        {
            ll top = q.top();
            ans += top;
            q.pop();
        }
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
