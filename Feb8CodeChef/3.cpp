#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> freq;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (auto it : freq)
    {
        b.push_back(it.first);
    }
    sort(b.rbegin(), b.rend());
    for (auto it : b)
    {
        if (freq[it] % 2 == 1)
        {
            cout << "Marichka" << endl;
            return;
        }
    }
    cout << "Zenyk" << endl;
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
