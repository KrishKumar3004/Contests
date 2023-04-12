#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    string aa = a, bb = b;
    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());
    if (aa != bb)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        // cout << i << endl;
        if (a[i] != b[i])
        {
            if (i - k < 0 && i + k > n - 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
