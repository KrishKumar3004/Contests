#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k, ans = 0, req = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> l(26);
    vector<ll> u(26);
    for (ll i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            u[s[i] - 'A']++;
        }
        else
        {
            l[s[i] - 'a']++;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        // cout << u[i] << " " << l[i] << endl;
        ans = ans + min(u[i], l[i]);
        ll x = abs(u[i] - l[i]);
        req = req + x / 2;
    }
    cout << ans + min(k, req) << endl;
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
