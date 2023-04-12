#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll mx, mn;
    cin >> mx >> mn;
    if ((mx - mn) == 1)
    {
        cout << 2 << endl;
        cout << mn << " " << mx << endl;
        return;
    }
    ll n = abs((mx - mn) * 2);
    cout << n << endl;
    ll ptr = mx - 1;
    while (ptr != mx + 1)
    {
        cout << ptr << " ";
        ptr++;
    }
    ptr -= 2;
    while (ptr != mn - 1)
    {
        cout << ptr << " ";
        ptr--;
    }
    ptr += 2;
    while (ptr != mx - 1)
    {
        cout << ptr << " ";
        ptr++;
    }
    cout << endl;
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
