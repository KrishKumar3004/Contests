#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, a = 0, b = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }
    ll ptr = 0;
    bool toA = true;
    while (n)
    {
        ll r = n % 10;
        ll p = 1;
        for (ll i = 0; i < ptr; i++)
        {
            p = p * 10;
        }
        if (r % 2 == 0)
        {
            a += (r / 2) * p;
            b += (r / 2) * p;
        }
        else
        {
            if (toA)
            {
                a += (r / 2 + 1) * p;
                b += (r / 2) * p;
                toA = false;
            }
            else
            {
                b += (r / 2 + 1) * p;
                a += (r / 2) * p;
                toA = true;
            }
        }
        ptr++;
        n /= 10;
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
