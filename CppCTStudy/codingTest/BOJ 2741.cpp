// N찍기
// 오답 2
// 1. cin/cout 최적화 안함
// 2. endl 은 줄 바꿈 + 출력 버퍼도 비우기 때문에 '\n' 사용하는게 더 효율적
#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, a;
	cin >> n;
	a = 1;
	while (a <= n)
	{
		cout << a << endl;
		a++;
	}
	return 0;
}