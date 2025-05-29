// 부녀회장이 될테야

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	// 입력이 많을 때는 ios.sync_with_studio(false) / cin.tie(0) 사용
	int t;
	cin >> t;
	vector<vector<int>> v2d;
	vector<int> v1(14); // 각 층의 벡터와 0층 벡터 초기화용 따로 두는 게 좋음

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = i + 1;
	}

	v2d.push_back(v1); // 0 층

	// 각 층 초기화
	for (int j = 1; j <= 14; j++)
	{
		for (int k = 0; k < 14; k++) // 매직넘버보다는 상수 선언해주기 !
		{
			int sum = 0;

			for (int l = 0; l <= k; l++)
			{
				sum += v2d[j - 1][l];
			}
			v1[k] = sum;
		} // 누적합 방식으로 성능 향상할 수 있음
		v2d.push_back(v1);
	}


	for (int i = 0; i < t; i++) // while(t--) 조건도 사용해보기
	{
		int a, b;
		cin >> a >> b;

		cout << v2d[a][b-1] << '\n';
	}

	return 0;
}