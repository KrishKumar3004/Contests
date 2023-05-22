#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void printDivisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    if (i - (n / i) == 1)
    {
        i--;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << " ";
    }
}
void solve()
{
    printDivisors(100);
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
