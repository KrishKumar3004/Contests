#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll x = 0, y = 0;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            y += 1;
        }
        if (s[i] == 'R')
        {
            x += 1;
        }
        if (s[i] == 'D')
        {
            y -= 1;
        }
        if (s[i] == 'L')
        {
            x -= 1;
        }
        if (x == 1 && y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
