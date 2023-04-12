
#include <bits/stdc++.h>
using namespace std;

void winnerdiff(vector<pair<int, int>> &p)
{
    int n = p.size();
    int arr[n] = {0};
    int max = arr[0];
    for (int i = n - 1; i >= 0; i--)
    {
        if (i != n - 1)
        {
            p[i].first += p[i + 1].first;
            p[i].second += p[i + 1].second;
        }
        arr[i] = abs(p[i].first - p[i].second);

        if (arr[i] > max)
            max = arr[i];
    }
    int k = 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            if (p[i].first > p[i].second)
            {
                k = 1;
                break;
            }
        }
    }
    cout << k << " " << max;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    vector<pair<int, int>> p(t);
    while (t--)
    {
        cin >> p[t].first >> p[t].second;
    }
    winnerdiff(p);
    return 0;
}