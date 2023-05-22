#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> freq(26, 0);
    vector<ll> repeat(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    ll mxFreq = 0;
    for (int i = 0; i < 26; i++)
    {
        mxFreq = max(mxFreq, freq[i]);
    }
    if (mxFreq > n / 2)
    {
        cout << -1 << endl;
        return;
    }
    ll start = 0, end = n - 1, cnt = 0;
    while (start < end)
    {
        if (s[start] == s[end])
        {
            repeat[s[start] - 'a']++;
        }
        start++, end--;
    }
    ll ans = 0, prev = 0;
    multiset<ll> st;
    for (int i = 0; i < 26; i++)
    {
        // cout << repeat[i] << " ";
        if (repeat[i] > 0)
        {
            st.insert(repeat[i]);
        }
    }
    // cout << endl;
    while (st.size() > 1)
    {
        auto begin = st.begin();
        auto end = st.end();
        end--;
        ll a = *begin;
        ll b = *end;
        st.erase(begin);
        st.erase(end);
        if (a > 1)
        {
            st.insert(a - 1);
        }
        if (b > 1)
        {
            st.insert(b - 1);
        }
        ans += 1;
    }
    if (st.size() == 1)
    {
        prev = *st.begin();
    }
    cout << ans + (prev) << endl;
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
