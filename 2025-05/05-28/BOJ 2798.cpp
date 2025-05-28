// 블랙잭

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, m;
	int sum = 0;
	int ans = 0;
	int idx = 0;
	cin >> n >> m;
	vector<int> v(n);

	// 벡터 초기화
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}


	for (int i = 0; i < v.size()-2; i++)
	{
		for (int j = i+1; j < v.size()-1; j++)
		{
			for (int k = j+1; k < v.size(); k++)
			{
				sum = v[i] + v[j] + v[k];
				if (sum <= m && sum > ans) ans = sum;

			}
		}
	}
	cout << ans;
	return 0;
}

// 브루트포스 문제 좀 더 풀어봐야 할 듯..