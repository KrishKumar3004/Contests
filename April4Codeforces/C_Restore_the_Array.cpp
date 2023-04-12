#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n - 1), b(n, -1);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        pq.push({a[i], i});
    }
    for (ll i = 0; i < n - 1; i++)
    {
        ll x = pq.top().first;
        ll y = pq.top().second;
        //cout << x << y << endl;
        pq.pop();
        if (b[y] == -1 && b[y + 1] == -1)
        {
            b[y] = x;
            b[y + 1] = x;
        }
        else if (b[y] == -1 && b[y + 1] != -1)
        {
            b[y] = x;
        }
        else if (b[y + 1] == -1 && b[y] != -1)
        {
            b[y + 1] = x;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << b[i] << " ";
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
