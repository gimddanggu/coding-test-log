#include <iostream>
using namespace std;

// 자료형 long long 을 사용해야 한다.
// int 범위 (약 ±2.1 × 10⁹)
// long long 범위 (약 ±9 × 10¹⁸)
/*
 * 값이 21억(2,147,483,647) 넘을 수 있으면
 * 문제에 "10¹²", "10¹⁸" 같은 숫자
 * 누적합, 곱셈 많이 쓰는 문제 → 대부분 long long
 */

int main(void)
{
    long long a, b, c;
    cin >> a >> b >> c;
    
    cout << a+b+c;
    return 0;
}