// Á÷°¢»ï°¢Çü

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	//vector<int> v = { 0, 0, 0 };
	vector<int> v(3);
	while (true)
	{
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> v[i];
		}

		if (v[0] == 0 && v[1] == 0 && v[0] == 0) break;

		int m = *max_element(v.begin(), v.end());
	
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != m)
			{
				sum += (v[i] * v[i]);
			}
		}

		if (m * m == sum) cout << "right" << endl;
		else cout << "wrong" << endl;
	}
	return 0;
}