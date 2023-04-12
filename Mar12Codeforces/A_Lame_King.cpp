#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans1 = (2 * abs(a)) + (2 * abs((abs(a) - abs(b))));
    ll ans2 = (2 * abs(b)) + (2 * abs((abs(b) - abs(a))));
    if (abs(a) != abs(b))
    {
        ans1--, ans2--;
    }
    cout << min(ans1, ans2) << endl;
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
