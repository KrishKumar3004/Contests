#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int count_swaps(vector<int> &a, int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int swaps = 0;
    vector<int> b(r - l + 1);
    int k = 0;
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            swaps += (m - i + 1);
            b[k++] = a[j++];
        }
    }
    while (i <= m)
    {
        b[k++] = a[i++];
    }
    while (j <= r)
    {
        b[k++] = a[j++];
    }
    for (k = 0; k < r - l + 1; k++)
    {
        a[l + k] = b[k];
    }
    return swaps;
}

int merge_sort(vector<int> &a, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        int swaps = merge_sort(a, l, m);
        swaps += merge_sort(a, m + 1, r);
        swaps += count_swaps(a, l, m, r);
        return swaps;
    }
    else
    {
        return 0;
    }
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        a[i] = c - '0';
    }
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            for (int i = l - 1; i < r; i++)
            {
                a[i] = 1 - a[i];
            }
        }
        else
        {
            int swaps = merge_sort(a, l - 1, r - 1);
            cout << swaps << endl;
        }
    }
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
