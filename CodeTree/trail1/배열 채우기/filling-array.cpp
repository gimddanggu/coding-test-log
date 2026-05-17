#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int tmpIdx = 0;

    for (int i=0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            tmpIdx = i;
            break;
        }
    }
    if (tmpIdx == 0) tmpIdx = 10;
    for (int i = tmpIdx-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}