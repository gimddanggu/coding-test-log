// ÆÑÅä¸®¾ó
#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, res;
	cin >> n;
	res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	cout << res;
	return 0;
}