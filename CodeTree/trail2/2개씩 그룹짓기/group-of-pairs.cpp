#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[2000] = {};
    int sumArr[1000] = {};
    cin >> n;

    for (int i=0; i < 2*n; i++) {
        cin >> arr[i];
    }

    std::sort(arr, arr+2*n);

    // for (int i=0; i<2*n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";

    int maxMinSum = 0;

    for (int i=0; i < 2*n; i++) {
        //sumArr[i] = arr[i] + arr[n-1-i];
        int sum = arr[i] + arr[2*n-1-i];
        // cout << sum << " ";
        if (maxMinSum < sum) maxMinSum = sum;
    }
    // cout << "\n";

    cout << maxMinSum;


    return 0;
}