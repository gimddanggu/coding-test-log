#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int hour = a;
    int min = b;
    int time = 0;
    while (true) {

        if (hour == c && min == d) 
            break;

        min++;
        time++;

        // cout << "hour: " << hour << "min: " << min << "\n";

        if (min==60) {
            hour++;
            min = 0;
        }
    } 

    cout << time;
    return 0;
}