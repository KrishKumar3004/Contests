#include <bits/stdc++.h>
using namespace std;

double f(double x, double y, vector<int> &a)
{
    double sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        double d1 = x - a[i];
        double d2 = y - a[i];
        sum += min(d1 * d1, d2 * d2);
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double x = a[0], y = a[0];
    double step_size = 0.1;
    double eps = 1e-7;
    double prev_f = f(x, y, a);

    while (true)
    {
        double curr_f = f(x, y, a);
        if (prev_f - curr_f < eps)
        {
            break;
        }

        double dx = 0, dy = 0;
        for (int i = 0; i < a.size(); i++)
        {
            double d1 = x - a[i];
            double d2 = y - a[i];
            if (d1 * d1 < d2 * d2)
            {
                dx += d1;
            }
            else
            {
                dy += d2;
            }
        }

        x -= step_size * dx;
        y -= step_size * dy;
        prev_f = curr_f;
    }

    int ans = f(x, y, a);
    cout << ans;

    return 0;
}
