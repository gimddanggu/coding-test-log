// ��ҹ��� �ٲٱ�

#include <iostream>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	for (int a : str)
	{
		//// �빮���� ���
		//if (65 <= a && a <= 90)
		//{
		//	cout << (char)(a + 32);
		//}
		//else if (97 <= a && a <= 122) cout << (char)(a - 32);
		// ��°�� w����a����?
		// ������ ����? -> �Ʒ��� ����
		
		if (isupper(a)) cout << char(tolower(a));
		else cout << char(toupper(a));
	}

	return 0;
}


// ���� 1 c++ ������ 90 <= a <= 120 �� ������ ����� �� ����
// 90 <= a && a <= 120 &&�� �����ؾߵȴ�.

// ����
// �ƽ�Ű�ڵ带 �̿��ؼ� �ٲٴ� ��� ��� ���ڿ� ���� �Լ� ����
/* 
 * #include <cctype>
 * isupper(a)/ islower(a) ��/�ҹ��� Ȯ��
 * toupper(a)/ tolower(a) �ҹ��� -> �빮��, �빮�� -> �ҹ���
 * 
 */