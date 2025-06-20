// 체스판 다시 칠하기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int paintingCount(const vector<vector<bool>>& board, int sy, int sx);

int main(void)
{
	int n, m;
	char color;
	cin >> n >> m;

	vector<int> countVec;
	// BLACK = 1, WHITE = 0;
	vector<vector<bool>> chess(n, vector<bool>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> color;
			if (color == 'B')
				chess[i][j] = 1;
			else chess[i][j] = 0;
		}
	}

	// 입력확인
	/*for (const auto& row : chess)
	{
		for (int c : row) cout << c << ' ';
		cout << '\n';
	}*/


	for (int i = 0; i < n-7; i++)
	{
		for (int j = 0; j < m-7; j++)
		{
			//cout <<"답: " << paintingCount(chess, i, j) << ' ';
			countVec.push_back(paintingCount(chess, i, j));
		}
	}

	auto res = min_element(countVec.begin(), countVec.end());
	cout << *res;


	return 0;
}

int paintingCount(const vector<vector<bool>>& board, int sy, int sx)
{
	bool curColor;

	bool answer1;
	bool answer2;

	int count1 = 0;
	int count2 = 0;

	//cout << curColor << answer << '\n' << '\n';
	for (int i = sy; i < sy + 8; i++)
	{
		for (int j = sx; j < sx + 8; j++)
		{
			answer1 = ((i + j) % 2 == 0) ? board[sy][sx] : !board[sy][sx];
			answer2 = !answer1;

			curColor = board[i][j];

			//cout << curColor << answer << '\n';
			if (curColor != answer1) count1++;
			if (curColor != answer2) count2++;
		}
	}
	return min(count1, count2);
}