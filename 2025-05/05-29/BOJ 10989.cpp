// 수 정렬하기 3
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, e;
	cin >> n;

	vector<int> v(10001);

	for( int i = 1; i < n+1; i++)
	{
		cin >> e;
		v[e] += 1;
	}

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] != 0)
		{
			for (int j = 0; j < v[i]; j++)
			{
				cout << i << '\n';
			}
		}
	}


	return 0;
}