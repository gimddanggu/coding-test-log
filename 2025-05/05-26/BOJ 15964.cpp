// �̻��� ��ȣ

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
} // 30�� ���Դ�..
// �ڷ����� �ٲٴ� 100�� ���Դ�.