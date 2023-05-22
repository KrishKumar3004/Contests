#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

vector<ll> divisors(ll n)
{
    vector<ll> divisors;
    ll i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            divisors.push_back(i);
    }
    if (i - (n / i) == 1)
    {
        i--;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            divisors.push_back(n / i);
    }
    return divisors;
}

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        vector<ll> output = divisors(arr[i]);
        for (auto it : output)
        {
            if (it != 1)
            {
                ans += freq[arr[i] / it] * freq[arr[i] * it];
            }
        }
    }
    for (auto it : freq)
    {
        if (it.second >= 3)
        {
            ans += (it.second * (it.second - 1) * (it.second - 2));
        }
    }
    cout << ans << endl;
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
