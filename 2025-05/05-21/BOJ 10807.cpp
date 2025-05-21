// ���� ����

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, a, v;
	int cnt;
	vector<int> v1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v1.push_back(a);
	}

	cin >> v;
	cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (v1[i] == v) cnt++;
	}
	cout << cnt;
	return 0;
}

// ������ ����
// 1. cnt �ʱ�ȭ�� ���ÿ� ������ ��
// 2. range-based for loop Ȱ��
// for (int x : v1) {
//     if (x == v) cnt++
// }	
// 3. std::count �Լ�Ȱ��(STL)
// #include <algorithm>
// int cnt = count(v1.begin(), v1.end(), v);  // �� �ٷ� ���� ���� ����