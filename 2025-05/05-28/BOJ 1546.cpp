// 평균

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	float maxNum;
	float sum = 0;
	cin >> n;

	vector<float> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	maxNum = *max_element(v.begin(), v.end());

	for (float e : v)
	{
		sum += (e / maxNum * 100);
	}
	cout << fixed << sum / n;
	return 0;
}