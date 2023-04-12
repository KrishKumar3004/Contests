#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n - 2; i++)
    {
        if (s[i] != s[i + 2])
            cnt++;
    }
    cout << cnt + 1 << endl;
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
