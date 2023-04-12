#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, i = 1;
    cin >> n;
    ll a = 0, b = 0;
    while (n > 0)
    {
        if (i % 4 == 0 || i % 4 == 1)
        {
            if (n - i >= 0)
                a += i;
            else
                a += (n);
            n -= i;
        }
        else
        {
            if (n - i >= 0)
                b += i;
            else
                b += n;
            n -= i;
        }
        i++;
    }
    cout << a << " " << b << endl;
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
