// 분해합

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int n;
	bool flg = false;
	cin >> n;

	
	
	for (int i = 1; i < n; i++)
	{
		int sum = 0;
		int tmpNum = i;

		while (tmpNum > 0)
		{
			sum += (tmpNum % 10);
			tmpNum /= 10;
		}


		if (sum + i == n)
		{
			cout << i;
			flg = true;
			break;
		}

	}

	if (!flg) cout << 0;


	return 0;
}