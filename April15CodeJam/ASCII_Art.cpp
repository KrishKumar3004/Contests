#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll arr[1000005];
string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void solve(ll p)
{
    ll n;
    cin >> n;
    ll q = n / 26;

    // cout << n << " " << q << " " << r << endl;
    ll id = lower_bound(arr, arr + 1000005, q) - arr;
    // cout << id << endl;
    if (arr[id] != q)
    {
        id--;
    }
    id++;
    ll r = n - (id * (id + 1) * 26) / 2;
    if (r == 0)
    {
        cout << "Case "
             << "#" << p << ": ";
        cout << str[26 - 1] << endl;
        return;
    }
    ll ans = r / (id + 1);
    if (r % (id + 1) != 0)
    {
        ans++;
    }
    cout << "Case "
         << "#" << p << ": ";
    cout << str[ans - 1] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test, p = 1;
    cin >> test;
    for (ll i = 0; i < 1000005; i++)
    {
        arr[i] = ((i + 1) * (i + 2)) / 2;
    }
    while (test--)
    {
        solve(p);
        p++;
    }
    return 0;
}
