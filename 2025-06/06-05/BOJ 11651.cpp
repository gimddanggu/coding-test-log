// 좌표 정렬하기 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(), [](const pair<int, int>& a , const pair<int, int>& b) {
		if (a.second != b.second) 
			return a.second < b.second;
		return a.first < b.first;
		});
	
	for (auto [x, y] : v)
	{
		cout << x << ' ' << y << '\n';
	}

	return 0;
}