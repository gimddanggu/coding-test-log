// 팰린드롬수

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string nStr;
	int nLen = 0;
	bool isPal = true;
	while (true)
	{
		cin >> nStr;
		nLen = nStr.size();
		if (nStr == "0") break;
		for (int i = 0; i <= nLen / 2; i++) // 가운데 수는 비교할 필요 없으므로 <= 대신 < 사용하기
		{

			if (nStr[i] != nStr[nStr.size() - 1 - i])	// nStr.size() -> nLen 사용하는 것이 좋음
			{
				isPal = false;
				break;
			}
		}
		if (!isPal) cout << "no" << endl;
		else cout << "yes" << '\n'; // 문자열 출력할 때 "" 사용하기 안그러면 쓰레기값 나옴
		isPal = true;
	}
	return 0;
}