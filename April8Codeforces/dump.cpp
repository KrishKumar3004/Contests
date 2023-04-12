#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

long long int binpow(long long int a, long long int b)
{
    long long int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

long long int nCr(long long int n, long long int r)
{
    if (r > n - r)
    {
        r = n - r;
    }
    long long int ans = 1;
    for (long long int i = 0; i < r; i++)
    {
        cout << i << endl;
        ans = (ans * (n - i)) % mod;
        ans = (ans * binpow(i + 1, mod - 2)) % mod;
    }
    return ans;
}

void solve()
{
    cout << binpow(2, 100) << endl;
    cout << nCr(5, 2) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
