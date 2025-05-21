// X보다 작은 수

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, x, a;
	cin >> n >> x;
	vector<int> v1;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v1.push_back(a);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		if (v1[i] < x) cout << v1[i] << " ";
	}
	return 0;
}