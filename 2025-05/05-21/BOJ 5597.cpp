// 과제 안 내신 분..?

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
	// 벡터 정렬
	sort(v1.begin(), v1.end());

	/*for (int x : v1)
	{
		if (vc != x) cout << vc << " ";
		vc++;
	}*/ // 누락된 값 2개 이상은 못 찾는 문제
	// STL의 find를 사용해서 해결
	// find() 함수는 못 찾으면 vector.end()를 반환

	for (int i = 1; i <= 30; i++)
	{
		if (find(v1.begin(), v1.end(), i) == v1.end()) cout << i << " ";
	}

	
	return 0;
}