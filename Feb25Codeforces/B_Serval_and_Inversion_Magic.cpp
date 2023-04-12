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
    ll low = 0, high = n - 1;
    bool flag = false, limit = false;
    while (low < high)
    {
        if (s[low] != s[high])
        {
            flag = true;
            if (limit == true)
            {
                cout << "No" << endl;
                return;
            }
        }
        if (s[low] == s[high] && flag == true)
        {
            limit = true;
        }
        low++, high--;
    }
    cout << "Yes" << endl;
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
