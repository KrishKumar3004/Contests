#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

string num = "0123456789";
void solve()
{
    ll n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    ll i;
    for (i = 0; i < n; i++)
    {
        if (s[i] >= num[p])
        {
            cout << s[i];
        }
        else
        {
            break;
            i++;
        }
    }
    cout << p;
    for (ll j = i; j < n; j++)
    {
        cout << s[j];
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
