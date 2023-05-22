#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans(n);
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    ll i = 1, j = n, k = -1;
    while (i < j)
    {
        a[++k] = i - 1;
        a[++k] = j - 1;
        i++;
        j--;
    }
    ans[0] = n;
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        sum += ans[i];
        // cout << sum << endl;
        ll next = ((sum + n - 1) / n) * n;
        ll prev = next - n;
        // cout << next << " " << prev << endl;
        if (prev + a[i + 1] > sum)
        {
            ans[i + 1] = (prev + a[i + 1]) - sum;
        }
        else
        {
            ans[i + 1] = (next + a[i + 1]) - sum;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
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
