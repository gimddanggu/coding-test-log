// �ƽ�Ű �ڵ�

#include <iostream>
using namespace std;

int main(void)
{
	char a;
	int ascii = 0;
	cin >> a;

	ascii = static_cast<int>(a);
	cout << ascii;
	return 0;
}


// �˰Ե� ���!
// C�迭 ������ ������(char)�� ������(int)�� ����ȯ�ϸ�
// �ڵ����� �ش� �ƽ�Ű �ڵ� ���� ����
// char �� ���������� ����1����Ʈ�� ����Ǳ� ������