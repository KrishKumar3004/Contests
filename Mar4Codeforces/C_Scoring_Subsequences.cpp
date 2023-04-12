#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        q.push(a[i]);
        if (q.size() > q.front())
        {
            q.pop();
        }
        cout << q.size() << " ";
    }
    cout << endl;
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
