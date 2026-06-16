#include <iostream>
using namespace std;
int Num_of_day(int m, int d) {
    int total_day = 0;
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i=1; i < m; i++) {
        total_day += days[i];
    }
    total_day += d;

    return total_day;
}
int main() {
    int day_cnt = 0;
    string day_of_week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int m1, d1, m2, d2;
    int idx_day = 0;
    string days_in;
    
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> days_in;

    int diff = Num_of_day(m2, d2) - Num_of_day(m1, d1);

    // cout << days_in << "\n";

    // 입력 받은 날짜가 어느 인덱스에 있는지 확인
    for (int i=0; i < 7; i++) {
        if (day_of_week[i] == days_in) idx_day = i;
    }

    day_cnt = diff / 7;
    // cout << diff << " " << day_cnt <<" " << diff % 7 << "\n";
    // cout << idx_day << "\n";

    // (/) 연산은 몇 번 주기가 돌았냐이고 (%) 연산은 나머지를 의미한다
    // 나머지가 idx_day 보다 작거나 같을 경우 +1
    if (diff % 7 >= idx_day) {
        day_cnt++;
    }

    cout << day_cnt;
    return 0;
}