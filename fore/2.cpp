#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<vector<int>> &v)
{
	sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b)
	{
		if(a[0] == b[0])return a[1] < b[1];
		return a[0] < b[0];
	});

	int N = v.size();
	int max_profit = v[N - 1][2];

	set<pair<int, int>> st;

	st.insert({v[N - 1][0], v[N - 1][2]});

	for(int i = N - 2; i >= 0; i--)
	{
		auto it = st.lower_bound({v[i][1] + 1, -1});
		
		if(it != st.end())
		{
			max_profit = max(max_profit, it->second + v[i][2]);
			auto it2 = st.lower_bound({v[i][0], -1});
			if(it2 != st.end())
			{
				st.insert({v[i][0], max(v[i][2], it2->second)});
			}
			else
			{
				st.insert({v[i][0], max(it->second, v[i][2])});
			}
		}
		else
		{
			max_profit = max(max_profit, v[i][2]);
			auto it2 = st.lower_bound({v[i][0], -1});
			
			if(it2 != st.end())
			{
				st.insert({v[i][0], max(v[i][2], it2->second)});
			}
			else
			{
				st.insert({v[i][0], v[i][2]});
			}
		}

	}
	return max_profit;

}

int main() {
	int N;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(3));
	for(int i = 0; i < N; i++)
	{
		cin >> v[i][0] >> v[i][1] >> v[i][2];
	}

	cout << maxScore(v);




	return 0;
}