#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

vector<ll> initializeDiffArray(vector<ll> &A)
{
    ll n = A.size();
    vector<ll> D(n + 1);
    D[0] = A[0], D[n] = 0;
    for (ll i = 1; i < n; i++)
        D[i] = A[i] - A[i - 1];
    return D;
}

void update(vector<ll> &D, ll l, ll r, ll x)
{
    D[l] += x;
    D[r + 1] -= x;
}

void solve()
{
    ll n, sum = 0;
    cin >> n;
    vector<ll> a(n), b(n), pre(n), ans(n, 0), e(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (ll i = 0; i < n; i++)
    {
        sum = b[i] + sum;
        pre[i] = sum;
    }
    ll x = 0;
    vector<ll> D = initializeDiffArray(ans);
    for (ll i = 0; i < n; i++)
    {
        ll id = upper_bound(pre.begin(), pre.end(), a[i] + x) - pre.begin();
        if (id == n)
        {
            update(D, i, n - 1, 1);
            x = pre[i];
            continue;
        }
        e[id] += b[id] - (pre[id] - (a[i] + x));
        update(D, i, id - 1, 1);
        x = pre[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
            ans[i] = D[i];
        else
            ans[i] = D[i] + ans[i - 1];
        cout << ans[i] * b[i] + e[i] << " ";
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
