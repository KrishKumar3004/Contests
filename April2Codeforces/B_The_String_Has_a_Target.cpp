#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, id = 0;
    cin >> n;
    string s;
    cin >> s;
    char c = s[0];
    for (ll i = 1; i < n; i++)
    {
        if (s[i] <= c)
        {
            c = s[i];
            id = i;
        }
    }
    cout << s[id];
    for (ll i = 0; i < n; i++)
    {
        if (i != id)
        {
            cout << s[i];
        }
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
