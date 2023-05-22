#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k, cnt = 0;
    cin >> n >> k;
    vector<ll> a(n);
    vector<pair<ll, ll>> prob;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (abs(a[i] - (i + 1)) % k != 0)
        {
            cnt++;
            prob.push_back({a[i], i + 1});
        }
    }
    if (cnt == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (cnt != 2)
    {
        cout << -1 << endl;
        return;
    }
    if (abs(prob[0].first - prob[1].second) % k == 0 && abs(prob[1].first - prob[0].second) % k == 0)
    {
        cout << 1 << endl;
        return;
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
