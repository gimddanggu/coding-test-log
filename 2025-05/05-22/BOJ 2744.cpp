// 대소문자 바꾸기

#include <iostream>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	for (int a : str)
	{
		//// 대문자인 경우
		//if (65 <= a && a <= 90)
		//{
		//	cout << (char)(a + 32);
		//}
		//else if (97 <= a && a <= 122) cout << (char)(a - 32);
		// 출력결과 w뮀럤a럳뾽?
		// 이유가 뭐지? -> 아래에 설명
		
		if (isupper(a)) cout << char(tolower(a));
		else cout << char(toupper(a));
	}

	return 0;
}


// 오류 1 c++ 에서는 90 <= a <= 120 의 조건을 사용할 수 없다
// 90 <= a && a <= 120 &&로 연결해야된다.

// 참고
// 아스키코드를 이용해서 바꾸는 방법 대신 문자열 관련 함수 사용법
/* 
 * #include <cctype>
 * isupper(a)/ islower(a) 대/소문자 확인
 * toupper(a)/ tolower(a) 소문자 -> 대문자, 대문자 -> 소문자
 * 
 */