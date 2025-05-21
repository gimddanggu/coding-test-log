// A+B - 5
// 오답1
// 출력형식 안 지킴
#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;

	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a + b;

	}
	return 0;
}