// ����
// �����̸� 1, �ƴϸ� 0 ���
// 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ��, ����
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