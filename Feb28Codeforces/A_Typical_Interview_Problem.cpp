#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

// FBFFBFFBFB

void solve()
{
    ll n;
    cin >> n;
    string s = "BFFBFFBFBFFBFFBFBFFBFFBF";
    string t;
    cin >> t;
    int found = s.find(t);
    if (found == -1)
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
