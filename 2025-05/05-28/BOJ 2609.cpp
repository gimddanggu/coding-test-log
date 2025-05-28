// 최대공약수와 최소공배수

#include <iostream>
using namespace std;

int GCD(int a, int b);
int LCM(int a, int b);

int main(void)
{
	int a, b;
	cin >> a >> b;

	if (b > a)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	cout << GCD(a, b) << '\n' << LCM(a, b);
	
	return 0;
}

int GCD(int a, int b)
{
	int r;	// 이 변수는 굳이 생성하지 않아도 됨
	int res = 0;

	r = a % b;
	if (r == 0) return b;

	return GCD(b, r);	// 값을 반환해야 하는 경우엔 return 잊지말고 써주기!
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}

