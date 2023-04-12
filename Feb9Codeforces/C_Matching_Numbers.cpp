#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    ll start = 2 * n + 1 - (n / 2);
    for (ll i = 2; i <= n; i += 2)
    {
        cout << i << " " << start - i << endl;
        start++;
    }
    for (ll i = 1; i <= n; i += 2)
    {
        cout << i << " " << start - i << endl;
        start++;
    }
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
