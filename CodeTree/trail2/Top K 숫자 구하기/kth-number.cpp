#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    int arr[1000] = {};
    cin >> n >> k;

    for (int i=0; i < n; i++) {
        cin >> arr[i];
    }

    std::sort(arr, arr+n);
    cout << arr[k-1];
    return 0;
}