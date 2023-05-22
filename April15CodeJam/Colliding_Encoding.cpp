#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

string str = "0123456789";

void solve(ll p)
{
    vector<ll> v(26);
    map<string, ll> m;
    for (ll i = 0; i < 26; i++)
    {
        cin >> v[i];
    }
    ll n;
    bool flag = true;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll num = 0;
        string temp;
        for (ll i = 0; i < s.length(); i++)
        {
            temp += str[v[s[i] - 'A']];
        }
        if (m[temp] == 1)
        {
            flag = false;
        }
        // cout << temp << endl;
        m[temp] = 1;
    }
    if (!flag)
    {
        cout << "Case "
             << "#" << p << ": "
             << "YES" << endl;
    }
    else
    {
        cout << "Case "
             << "#" << p << ": "
             << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    ll p = 1;
    cin >> test;
    while (test--)
    {
        solve(p);
        p++;
    }
    return 0;
}
