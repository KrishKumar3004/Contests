#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    string a, b;
    cin >> a >> b;
    ll n = a.size(), m = b.size();
    if (a[0] == b[0])
    {
        cout << "YES" << endl;
        cout << a[0] << '*' << endl;
        return;
    }
    if (a[n - 1] == b[m - 1])
    {
        cout << "YES" << endl;
        cout << '*' << a[n - 1] << endl;
        return;
    }
    if (n < m)
    {
        string temp;
        temp = a;
        a = b;
        b = temp;
        ll t;
        t = n;
        n = m;
        m = t;
    }
    for (ll i = 0; i < m - 1; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            if (a[j] == b[i] && a[j + 1] == b[i + 1])
            {
                cout << "YES" << endl;
                cout << '*' << a[j] << a[j + 1] << '*' << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
