#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll f(string s)
{
    ll n = s.length();
    set<ll> id;
    map<char, ll> m;
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    ll mx = 0;
    char c;
    for (auto it : m)
    {
        mx = max(mx, it.second);
        c = it.first;
    }
    for (auto it : s)
    {
        if (it != c)
        {
            s.erase(it);
        }
    }
    if (id.size() == 0)
    {
        return 0;
    }
    return 1 + f(s);
}
void solve()
{
    string s;
    cin >> s;
    cout << f(s) << endl;
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
