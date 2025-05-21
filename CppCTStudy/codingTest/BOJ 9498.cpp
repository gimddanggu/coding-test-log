// 90 ~ 100점은 A, 
// 80 ~ 89점은 B, 
// 70 ~ 79점은 C, 
// 60 ~ 69점은 D, 
// 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main(void)
{
	int a;
	cin >> a;

	if (a >= 90) cout << "A";
	else if (a >= 80) cout << "B";
	else if (a >= 70) cout << "C";
	else if (a >= 60) cout << "D";
	else cout << "F";

	return 0;
}
