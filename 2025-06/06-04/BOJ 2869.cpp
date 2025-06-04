// 달팽이는 올라가고 싶다

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, v;
	cin >> a >> b >> v;
	int day = 0;
	// 처음 시도한 방법 ( 반복문 )
	/*while (v >= 0)
	{
		day++;
		v -= a;
		if (v <= 0) break;
		v += b;
	}
	cout << day;
	return 0;*/
	
	// 두 번째 시도 ( 수식 이용 )
	day = (v - b - 1) / (a - b) + 1;
	// ceil 없이 올림 하는 방법
	cout << day;

	return 0;
}
