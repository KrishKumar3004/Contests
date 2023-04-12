#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    bool flag = false, ans = false;
    string s, a, b;
    for (ll i = 0; i < 2 * n - 2; i++)
    {
        cin >> s;
        if (s.size() == n - 1 && flag == false)
        {
            a = s;
            flag = true;
        }
        else if (s.size() == n - 1 && flag == true)
        {
            // cout << a << " " << s << endl;
            reverse(s.begin(), s.end());
            if (s == a)
            {
                ans = true;
            }
        }
    }
    if (ans == true)
    {
        cout << "YES" << endl;
        return;
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
