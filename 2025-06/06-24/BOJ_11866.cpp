#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, k;
	int cnt = 1;
	int sum = 0;
	cin >> n >> k;
	vector<int> cLis(n);
	vector<int> visitedCLis(n, 0);
	int idx = 0;
	for (int i = 0; i < n; i++)
		cLis[i] = i+1;

	cout << '<';

	while (true)
	{
		idx %= n; // 0~n-1 ������ ����

		//cout << idx << ' ';
		//cout << "cnt: " << cnt << ' ' << "idx: " << idx << '\n';

		// k��° ���� ���
		if (cnt == k)
		{
			// �湮���� ��
			if (visitedCLis[idx] == 0)
			{

				visitedCLis[idx] = 1;
				sum += 1;
				
				if (sum != n) cout << cLis[idx] << ", ";
				else cout << cLis[idx];
				cnt = 1;
				idx++;
				
			}
			else if (visitedCLis[idx] == 1)
			{
				idx++;
			}

			// �湮���� ���
			
		}

		else {
			if (visitedCLis[idx] == 1)
			{
				idx++;
			}
			else {
				cnt++;
				idx++;
			}
		}		

		if (sum == n) // ��� �湮������ �ݺ� ����
			break;
	}
	cout << '>';
	return 0;
}