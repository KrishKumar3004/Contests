#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll findMaxSum(ll arr[], ll n)
{

	ll CL[n] = {0}, CR[n] = {0};

	stack<ll> q;
	for (ll i = 0; i < n; i++)
	{
		while (q.size() != 0 && arr[q.top()] <= arr[i])
		{
			CL[i] += CL[q.top()] + 1;
			q.pop();
		}
		q.push(i);
	}

	while (q.size() != 0)
		q.pop();
	for (ll i = n - 1; i >= 0; i--)
	{
		while (q.size() != 0 && arr[q.top()] < arr[i])
		{
			CR[i] += CR[q.top()] + 1;
			q.pop();
		}
		q.push(i);
	}
	while (q.size() != 0)
		q.pop();
	ll ans = 0;
	for (ll i = 0; i < n; i++)
		ans += (CL[i] + 1) * (CR[i] + 1) * arr[i];

	return ans;
}
ll sumSubarrayMins(ll A[], ll n)
{
	ll left[n], right[n];

	stack<pair<ll, ll>> s1, s2;
	for (ll i = 0; i < n; ++i)
	{
		ll cnt = 1;
		while (!s1.empty() && (s1.top().first) > A[i])
		{
			cnt += s1.top().second;
			s1.pop();
		}

		s1.push({A[i], cnt});
		left[i] = cnt;
	}

	for (ll i = n - 1; i >= 0; --i)
	{
		ll cnt = 1;

		while (!s2.empty() && (s2.top().first) >= A[i])
		{
			cnt += s2.top().second;
			s2.pop();
		}

		s2.push({A[i], cnt});
		right[i] = cnt;
	}

	ll result = 0;

	for (ll i = 0; i < n; ++i)
		result = (result + A[i] * left[i] * right[i]);

	return result;
}

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	ll x = findMaxSum(arr, n);
	ll y = sumSubarrayMins(arr, n);
	cout << abs(x - y) << endl;
}
