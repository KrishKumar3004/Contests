#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = n - 1, ans = n;
    while (x < y)
    {
        if (s[x] != s[y])
        {
            x++, y--;
            ans -= 2;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
