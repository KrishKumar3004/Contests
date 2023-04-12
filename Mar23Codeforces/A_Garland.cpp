#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    map<char, ll> m;
    for (auto it : s)
    {
        m[it]++;
    }
    ll mx = 0;
    for (auto it : m)
    {
        mx = max(mx, it.second);
    }
    if (mx == 4)
    {
        cout << -1 << endl;
        return;
    }
    else if (mx == 3)
    {
        cout << 6 << endl;
        return;
    }
    cout << 4 << endl;
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
