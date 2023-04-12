#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), arr;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    ll cnt = 0;
    for (auto it : m)
    {
        arr.push_back(it.second);
    }
    sort(arr.begin(), arr.end());
    ll sz = arr.size();
    for (ll i = 0; i < sz - 1; i++)
    {
        if (arr[i] > 1 && arr[i + 1] >= arr[i])
        {
            // cout << "HERE" << endl;

            arr[i + 1] = arr[i + 1] - arr[i] + 1;
            arr[i] = 1;
        }
    }
    for (ll i = 0; i < sz; i++)
    {
        // cout << arr[i] << endl;
        if (arr[i] % 2 == 0)
        {
            cnt++;
            // cout << "HERE" << endl;
        }
    }
    cout << sz - cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
