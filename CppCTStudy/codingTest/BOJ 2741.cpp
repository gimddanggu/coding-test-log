// N���
// ���� 2
// 1. cin/cout ����ȭ ����
// 2. endl �� �� �ٲ� + ��� ���۵� ���� ������ '\n' ����ϴ°� �� ȿ����
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