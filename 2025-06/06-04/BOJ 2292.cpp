// 벌집

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	// 1 6 12 18 24
	int start = 2;
	int idx = 1;
	int n;
	vector<int> sV;
	sV.push_back(1);

	while (start <= 1001000000)
	{
		sV.push_back(start);
		start += (idx * 6);
		cout << start << '\n';
		//start += idx;
		idx++;
	}

	cin >> n;
	for (int i = 0; i < sV.size() - 1; i++)
	{
		if (n < sV[i + 1]) {
			cout << i + 1;
			break;
		}
	}


	return 0;
}