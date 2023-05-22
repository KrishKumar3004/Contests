#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll start, end;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            start = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            end = i;
            break;
        }
    }
    // cout << start << " " << end << endl;
    for (ll i = end + 1; i < n; i++)
    {
        if (i > 0 && b[i] >= b[i - 1])
        {
            end++;
        }
        else
        {
            break;
        }
    }
    for (ll i = start; i >= 0; i--)
    {
        // cout << i << " " << i - 1 << endl;
        if (i > 0 && b[i] >= b[i - 1])
        {
            start--;
        }
        else
        {
            break;
        }
    }
    cout << start + 1 << " " << end + 1 << endl;
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
