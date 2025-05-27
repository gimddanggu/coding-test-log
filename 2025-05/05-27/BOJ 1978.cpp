// �Ҽ� ã��

#include <iostream>
#include <vector>
using namespace std;

int sol1(vector<int>v, int a, int totalCnt);
int sol2(vector<int> v, int a, int totalCnt);
int sol3(vector<int> v, int a, int totalCnt);
int main(void)
{
	int a;
	int totalCnt = 0;

	cin >> a;
	vector<int> v(a);
	for (int i = 0; i < a; i++)
	{
		cin >> v[i];
	}

	cout << sol2(v, a, totalCnt);
	
	return 0;
}

// (1) n���� Ž��
int sol1(vector<int>v, int a, int totalCnt)
{
	for (int n : v)
	{
		int count = 0;

		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				count += 1;
			}

		}

		if (count == 2) totalCnt += 1;
	}
	return totalCnt;
}

// (2) n/2 ���� Ž��
int sol2(vector<int> v, int a, int totalCnt)
{
	for (int n : v)
	{
		int count = 0;
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0) count += 1;
		}
		if (n != 1 && count == 0) totalCnt += 1;
	}
	return totalCnt;
}

// (3) n�����ٱ��� Ž��
int sol3(vector<int> v, int a, int totalCnt)
{
	for (int n : v)
	{
		int count = 0;
		for (int i = 2; i <= pow(n,0.5); i++)
		{
			if (n % i == 0) count += 1;
		}
		if (n != 1 && count == 0) totalCnt += 1;
	}
	return totalCnt;
}

// ������ Ž���� ��� pow, sqrt�� ����ϴ� �� ����
// for (int i = 2; i * i <= n; i++) �� ����ϴ� ���� ����
// ������ �� ������� �д� �͸� �ʿ��� ��쿡�� const ������ ���� ������ ���ڸ� �������� ���� ����.
// �����佺�׳׽��� ü ����� �ش� ���������� ���� �����Ƿ� ���丸 �н� ���뿡 �����ϰ� ������ �ٸ� �������� ����