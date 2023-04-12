#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, i = 1;
    cin >> n;
    ll aw = 0, bw = 0, ab = 0, bb = 0;
    while (n > 0)
    {
        if (i % 4 == 0 || i % 4 == 1)
        {
            if (n - i >= 0)
            {
                if (i % 2 == 0)
                {
                    aw += i / 2;
                    ab += i / 2;
                }
                else
                {
                    aw += (i / 2) + 1;
                    ab += i / 2;
                }
            }
            else
            {
                if (n % 2 == 0)
                {
                    aw += n / 2;
                    ab += n / 2;
                }
                else
                {
                    aw += (n / 2) + 1;
                    ab += n / 2;
                }
            }
            n -= i;
        }
        else
        {
            if (n - i >= 0)
            {
                if (i % 2 == 0)
                {
                    bw += i / 2;
                    bb += i / 2;
                }
                else
                {
                    bb += (i / 2) + 1;
                    bw += i / 2;
                }
            }
            else
            {
                if (n % 2 == 0)
                {
                    bw += n / 2;
                    bb += n / 2;
                }
                else
                {
                    bb += (n / 2) + 1;
                    bw += n / 2;
                }
            }
            n -= i;
        }
        i++;
    }
    cout << aw << " " << ab << " " << bw << " " << bb << endl;
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
