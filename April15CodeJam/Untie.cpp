#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(ll p)
{
    string s;
    cin >> s;
    ll n = s.length();
    ll cnt = 1;
    vector<ll> ans;
    char prev = s[n - 1];
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == prev)
        {
            cnt++;
        }
        else
        {
            ans.push_back(cnt);
            cnt = 1;
        }
        prev = s[i];
    }
    ans.push_back(cnt);
    ll res = 0;
    for (auto it : ans)
    {
        if (it > 1)
            res += (it) / 2;
    }
    cout << "Case "
         << "#" << p << ": ";
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test, p = 1;
    cin >> test;
    while (test--)
    {
        solve(p);
        p++;
    }
    return 0;
}
