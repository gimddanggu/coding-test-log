#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10] = {};
    int cnt = 0;
    double sum_a = 0; 

    for (int i=0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        sum_a += arr[i];
        cnt++;
    }
    cout << sum_a << " ";
    cout << fixed;
    cout.precision(1);
    cout << sum_a / cnt;
    return 0;
}