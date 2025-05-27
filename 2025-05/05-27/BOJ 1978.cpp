// 소수 찾기

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

// (1) n까지 탐색
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

// (2) n/2 까지 탐색
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

// (3) n제곱근까지 탐색
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

// 제곱근 탐색할 경우 pow, sqrt를 사용하는 것 보다
// for (int i = 2; i * i <= n; i++) 을 사용하는 것이 좋다
// 벡터의 값 변경없이 읽는 것만 필요한 경우에는 const 참조를 통해 벡터의 인자를 가져오는 것이 좋다.
// 에라토스테네스의 체 방식은 해당 문제에서는 맞지 않으므로 개념만 학습 내용에 정리하고 구현은 다른 문제에서 진행