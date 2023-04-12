#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    for (ll i = -5; i <= 5; i++)
    {
        for (ll j = -5; j <= 5; j++)
        {
            for (ll k = -5; k <= 5; k++)
            {
                for (ll l = -5; l <= 5; l++)
                {
                    if (i + j == k * l && i + k == j * l && i + l == j * k && k + j == i * l && k + l == j * i && l + j == k * i)
                    {
                        cout << i << " " << j << " " << k << " " << l << endl;
                    }
                }
            }
        }
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
