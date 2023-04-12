#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, cntn = 0;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            cntn++;
        }
    }
    b = a;
    sort(b.rbegin(), b.rend());
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] > 0)
            cnt++;
        else
            cnt--;
        cout << cnt << " ";
    }
    cout << endl;
    for (ll i = 0; i < cntn; i++)
    {
        cout << 1 << " " << 0 << " ";
    }
    cnt = 0;
    for (ll i = 0; i < (n - (2 * cntn)); i++)
    {
        cnt++;
        cout << cnt << " ";
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
