#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            a[i]++;
        }
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i + 1] % a[i] == 0)
        {
            a[i + 1]++;
        }
        if (a[i + 1] % a[i] == 0)
        {
            a[i + 1]++;
        }
    }
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
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
