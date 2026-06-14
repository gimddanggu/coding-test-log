#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int day_count = 0;
    int month = m1;
    int day = d1;

    while(true) {
        if (month == m2 && day == d2) {
            cout << day_count+1;
            break;
        }

        day++;
        day_count++;

        if (months[month] < day) {
            month++;
            day = 1;
        }
    }
    
    return 0;
}