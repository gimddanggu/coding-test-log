// 윤년
// 윤년이면 1, 아니면 0 출력
// 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때, 윤년
#include <iostream>
using namespace std;

int main(void)
{
	int year;
	cin >> year;

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) cout << 1;
	else cout << 0;

	return 0;
}