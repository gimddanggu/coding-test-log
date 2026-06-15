#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_int[7] = {0, 1, 2, 3, 4, 5, 6};
    string day_kor[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int day1 = 0; 
    int day2 = 0;

    for (int i=1; i<m1; i++) {
        day1 += days[i];
    }

    day1 += d1;

    for (int i=1; i<m2; i++) {
        day2 += days[i];
    }

    day2 += d2;

    int diff = day2 - day1;
    int res = 0;
    if (diff < 0) // 값이 더 작을 경우
    {
        if ((diff * -1) % 7 == 0) {
            res = 0;
        } else
        res = 7 - ((diff * -1) % 7);
    }
    else res = diff % 7;

    cout << day_kor[res];

    return 0;
}
