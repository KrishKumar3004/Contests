#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    int n = s.length(), res = 1;
    if (s[0] == '0')
    {
        cout << 0 << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0 && s[i] == '?')
        {
            res *= 9;
        }
        else if (s[i] == '?')
        {
            res *= 10;
        }
    }
    cout << res << endl;
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
