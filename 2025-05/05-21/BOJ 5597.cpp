// ���� �� ���� ��..?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v1;
	int s;

	for (int i = 0; i < 28; i++)
	{
		cin >> s;
		v1.push_back(s);
	}
	// ���� ����
	sort(v1.begin(), v1.end());

	/*for (int x : v1)
	{
		if (vc != x) cout << vc << " ";
		vc++;
	}*/ // ������ �� 2�� �̻��� �� ã�� ����
	// STL�� find�� ����ؼ� �ذ�
	// find() �Լ��� �� ã���� vector.end()�� ��ȯ

	for (int i = 1; i <= 30; i++)
	{
		if (find(v1.begin(), v1.end(), i) == v1.end()) cout << i << " ";
	}

	
	return 0;
}