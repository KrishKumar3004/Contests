#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, a, b, ta = a, tb = b;
    cin >> n >> a >> b;
    vector<pair<ll, ll>> v(n);
    vector<ll> aa, bb;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = {x, i};
    }
    sort(v.rbegin(), v.rend());
    for (ll i = 0; i < n; i++)
    {
        cout << v[i].second << endl;
        ll sza = aa.size();
        ll szb = bb.size();
        if ((sza + 1) * a <= (szb + 1) * b)
        {
            aa.push_back(v[i].second);
        }
        else
        {
            bb.push_back(v[i].second);
        }
    }
    cout << aa.size() << " ";
    for (auto it : aa)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << bb.size() << " ";
    for (auto it : bb)
    {
        cout << it + 1 << " ";
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
