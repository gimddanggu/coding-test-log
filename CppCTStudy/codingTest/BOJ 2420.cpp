// ���ĸ�����
// ����1
// �� long long
// �־��� ���� ������ �� Ȯ������
// long long �����϶��� llabs() �� ����ϴ� ���� ���ٰ�  �Ѵ�.
#include <iostream>
using namespace std;

int main(void)
{
	long long n, m;
	cin >> n  >> m;

	cout << llabs(n - m);
	return 0;
}

// ���� 
// �ٸ� ��� ����� ���� c ����� scanf / printf�� ���� ����ߴ�.
// cout/cin�� printf/scanf �� ���� �ӵ��� stdio�� ����ȭ�Ǿ� �ֱ� ������ ������.
// c++ ����� �����ϸ鼭 ������� ������ �ϰ� ������ 
// ios::sync_with_stdio(false)�� cin.tie(0)�� �Է��ϸ� scanf/printf ��ŭ ��������.
// ios::sync_with_stdio(false); // C stdio���� ����ȭ ���� �� �ӵ� ����
// cin.tie(0);                  // cin�� cout �и� �� ���ʿ��� flush ����