// 아스키 코드

#include <iostream>
using namespace std;

int main(void)
{
	char a;
	int ascii = 0;
	cin >> a;

	ascii = static_cast<int>(a);
	cout << ascii;
	return 0;
}


// 알게된 사실!
// C계열 언어에서는 문자형(char)을 정수형(int)로 형변환하면
// 자동으로 해당 아스키 코드 값이 나옴
// char 가 내부적으로 정수1바이트로 저장되기 때문에