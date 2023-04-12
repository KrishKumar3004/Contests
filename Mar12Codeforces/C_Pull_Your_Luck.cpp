#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll findS(ll s)
{
    ll l = 1, r = (s / 2) + 1;

    // Apply Binary search
    while (l <= r)
    {

        // Find mid
        ll mid = (l + r) / 2;

        // find sum of 1 to mid natural numbers
        // using formula
        ll sum = mid * (mid + 1) / 2;

        // If sum is equal to n
        // return mid
        if (sum == s)
            return mid;

        // If greater than n
        // do r = mid-1
        else if (sum > s)
            r = mid - 1;

        // else do l = mid + 1
        else
            l = mid + 1;
    }

    // If not possible, return -1
    return -1;
}

void solve()
{
    ll n, k, p, cnt = 0;
    cin >> n >> k >> p;
    ll x = n - k, max_range = (p * (p + 1)) / 2;
    while (cnt <= 1000)
    {
        ll f = findS(x);
        if (f != -1)
        {
            if (f <= p)
            {
                cout << "Yes" << endl;
                return;
            }
            else
            {
                cout << "No" << endl;
                return;
            }
        }
        x += n;
        cnt++;
    }
    cout << "No" << endl;
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
