// 개수 세기

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

// 개선할 사항
// 1. cnt 초기화와 동시에 선언할 것
// 2. range-based for loop 활용
// for (int x : v1) {
//     if (x == v) cnt++
// }	
// 3. std::count 함수활용(STL)
// #include <algorithm>
// int cnt = count(v1.begin(), v1.end(), v);  // 한 줄로 개수 세기 가능