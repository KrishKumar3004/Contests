#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != 'm' && s[i] != 'M' && s[i] != 'e' && s[i] != 'E' && s[i] != 'o' && s[i] != 'O' && s[i] != 'w' && s[i] != 'W')
        {
            cout << "NO" << endl;
            return;
        }
    }
    bool a = false, b = false, c = false, d = false;
    if (s[0] != 'm' && s[0] != 'M')
    {
        cout << "NO " << endl;
        return;
    }

    else
    {
        a = true;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == 'm' || s[i] == 'M')
        {
            if (s[i - 1] != 'm' && s[i - 1] != 'M')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'e' || s[i] == 'E')
        {
            b = true;
            if (s[i - 1] != 'm' && s[i - 1] != 'M' && s[i - 1] != 'e' && s[i - 1] != 'E')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'o' || s[i] == 'O')
        {
            c = true;
            if (s[i - 1] != 'o' && s[i - 1] != 'O' && s[i - 1] != 'e' && s[i - 1] != 'E')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'w' || s[i] == 'W')
        {
            d = true;
            if (s[i - 1] != 'o' && s[i - 1] != 'O' && s[i - 1] != 'w' && s[i - 1] != 'W')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (a == false || b == false || c == false || d == false)
    {
        cout << "NO" << endl;
        return;
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
