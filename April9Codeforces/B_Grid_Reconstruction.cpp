#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(2 * n);
    ll i = 0, v = 2 * n, id = 0;
    while (i < n / 2)
    {
        // cout << i << " " << v << " " << id << endl;
        a[id] = v;
        i++, id += 2, v -= 2;
    }
    i = 0, v = 2, id = 1;
    while (i < n / 2)
    {
        // cout << i << " " << v << " " << id << endl;
        a[id] = v;
        i++, id += 2, v += 2;
    }
    i = 0, v = 1, id = n;
    while (i < n / 2)
    {
        // cout << i << " " << v << " " << id << endl;
        a[id] = v;
        i++, id += 2, v += 2;
    }
    i = 0, v = n + 1, id = n + 1;
    while (i < n / 2)
    {
        // cout << i << " " << v << " " << id << endl;
        a[id] = v;
        i++, id += 2, v += 2;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (ll i = n; i < 2 * n; i++)
    {
        cout << a[i] << " ";
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
