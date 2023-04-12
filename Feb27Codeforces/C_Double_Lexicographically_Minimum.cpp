#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

string s = "abcdefghijklmnopqrstuvwxyz";

void solve()
{
    string a, ans;
    cin >> a;
    ll n = a.size();
    for (ll i = 0; i < n; i++)
    {
        ans.push_back('*');
    }
    vector<ll> freq(26, 0), pre(26, 0);

    for (ll i = 0; i < n; i++)
    {
        freq[a[i] - 'a']++;
    }
    pre[0] = freq[0];
    // cout << freq[0] << endl;
    for (ll i = 1; i < 26; i++)
    {
        // cout << freq[i] << endl;
        pre[i] = pre[i - 1] + freq[i];
    }

    ll low = 0, high = n - 1, i = 0, prev = -1;
    while (low <= high)
    {
        if (prev != -1)
        {
            if (pre[i] != n)
            {
                if (freq[i] == 0)
                {
                    i++;
                    continue;
                }
                ans[low] = s[i];
                ans[high] = s[prev];
                low++, high--;
                freq[i]--, freq[prev]--;
                while (low <= high)
                {
                    if (freq[i] == 0)
                    {
                        i++;
                    }
                    else
                    {
                        ans[low] = s[i];
                        low++;
                        freq[i] -= 1;
                    }
                }
                cout << ans << endl;
                return;
            }
            // cout << low << " " << high << " " << i << " " << prev << endl;
            if (freq[i] == 1)
            {
                freq[i]--;
                ans[low] = s[i];
                ans[high] = s[prev];
                freq[i]--, freq[prev]--;
                low++, high--;
                i++;
            }
            else if (freq[i] >= 2)
            {
                ans[low] = s[i];
                ans[high] = s[i];
                low++, high--;
                freq[i] -= 2;
            }
            else if (freq[prev] == 1 && low == high)
            {
                ans[low] = s[prev];
                low++, high--;
                freq[prev]--;
            }
            else
            {
                low++, high--;
            }
        }
        else
        {
            if (freq[i] == 0)
            {
                i++;
            }
            else if (freq[i] == 1 && low == high)
            {
                ans[low] = s[i];
                low++, high--;
                prev = i;
                i++;
            }
            else if (freq[i] == 1)
            {
                prev = i;
                i++;
            }
            else
            {
                ans[low] = s[i];
                ans[high] = s[i];
                low++, high--;
                freq[i] -= 2;
            }
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
