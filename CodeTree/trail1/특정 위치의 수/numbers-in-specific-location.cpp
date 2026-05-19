#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int res = 0;
    for (int i = 0; i < 10 ; i++) {
        cin >> arr[i];
        if (i == 2 | i == 4 | i == 9) {
            res += arr[i];
        }
    }

    cout << res;
    return 0;
}