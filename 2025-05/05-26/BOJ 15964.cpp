// 이상한 기호

#include <iostream>
using namespace std;

void sol(long a, long b)
{
	cout << (a + b) * (a - b) << endl;
}

long long sol2(long a, long b)
{
	return (a + b) * (a - b);
}

int main(void)
{
	long long a, b;
	cin >> a >> b;
	sol(a, b);
	cout << sol2(a, b);
	return 0;
} // 30점 나왔다..
// 자료형을 바꾸니 100점 나왔다.