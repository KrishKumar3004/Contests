#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    int n, sum = 0, cntn = 0, cntp = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == -1)
            cntn++;
        else
            cntp++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == -1 && a[i + 1] == -1)
        {
            sum += 4;
            cout << sum << endl;
            return;
        }
    }
    if (cntn == 0)
    {
        cout << sum - 4 << endl;
        return;
    }
    cout << sum << endl;
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
