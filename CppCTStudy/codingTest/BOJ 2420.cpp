// 사파리월드
// 오답1
// 또 long long
// 주어진 수의 범위를 잘 확인하자
// long long 형식일때는 llabs() 를 사용하는 것이 좋다고  한다.
#include <iostream>
using namespace std;

int main(void)
{
	long long n, m;
	cin >> n  >> m;

	cout << llabs(n - m);
	return 0;
}

// 참고 
// 다른 출력 방식을 보니 c 방식의 scanf / printf를 많이 사용했다.
// cout/cin은 printf/scanf 에 비해 속도는 stdio와 동기화되어 있기 때문에 느리다.
// c++ 방식을 유지하면서 입출력을 빠르게 하고 싶으면 
// ios::sync_with_stdio(false)와 cin.tie(0)를 입력하면 scanf/printf 만큼 빨라진다.
// ios::sync_with_stdio(false); // C stdio와의 동기화 끊기 → 속도 개선
// cin.tie(0);                  // cin과 cout 분리 → 불필요한 flush 방지