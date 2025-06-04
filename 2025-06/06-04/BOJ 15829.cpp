// Hashing

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int c;
	int L;
	long long M = 1234567891;
	int r = 31;
	int idx = 96;
	long long hash = 0;
	long long power = 1;
	string str;

	cin >> L;
	cin >> str;

	for (int i = 0; i < L; i++)
	{
		//cout << str[i];
		c = str[i] - idx; // str[i] - 'a' + 1 가독성 측면에서 좋다.
		hash = (hash + c * power) % M;
		power = (power * r) % M;
	}

	cout << hash;

	return 0;
}