// 학점계산

#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

int main(void)
{
	float res = 0.0;
	char a, b;
	string grade;
	cin >> grade;

	a = grade[0];
	b = grade[1];

	if (a == 'A') res = 4.0;
	else if (a == 'B') res = 3.0;
	else if (a == 'C') res = 2.0;
	else if (a == 'D') res = 1.0;
	else res = 0.0;

	if (b == '+') res += 0.3;
	else if (b == '-') res -= 0.3;

	cout << fixed << setprecision(1) << res;
	return 0;
}


// c++ 소수점 자리 출력하는 법
/* #include <iomanip>
 * cout << fixed << setprecision(1) << num;
 */