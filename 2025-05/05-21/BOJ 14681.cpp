#include <iostream>
using namespace std;

int main(void)
{
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0) cout << 1;
	else if (x > 0 && y < 0) cout << 4;
	else if (x < 0 && y < 0) cout << 3;
	else cout << 2;
	return 0;
}

// 실패 2 성공1
// 2, 4 분면 헷갈렸다. 이게 맞아? 
// 오타로 한번 더 틀렸다..