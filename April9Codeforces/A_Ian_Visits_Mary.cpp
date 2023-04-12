#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << 2 << endl;
    if(b%a!=0){
        cout<<a<<" "<<b<<endl;
    }
    else if((b+1) % a!=0){
        cout<<a<<" "<<b+1<<endl;
    }
    else if(b % (a+1)!=0){
        cout<<a+1<<" "<<b<<endl;
    }
    cout<<a<<" "<<b<<endl;
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
