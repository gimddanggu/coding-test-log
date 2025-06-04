// 웰컴키트

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	vector<int> v(6);
	int t, p;

	cin >> n;
	for (int i = 0; i < 6; i++)
		cin >> v[i];

	cin >> t >> p;

	
	int tCnt = 0;
	for (int e : v)
	{
		tCnt += (e / t);
		if (e % t) tCnt += 1;
	}

	cout << tCnt << '\n' << n / p << ' ' << n % p;


	return 0;
}