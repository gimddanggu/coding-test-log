#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    int arr[100];

    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> arr[i];
        // 0 1 2 3 4 5 6

        if (i % 2 == 0) {
            std::sort(arr, arr + i + 1);
            cout << arr[i/2] << " ";
        } 
    }
    return 0;
}