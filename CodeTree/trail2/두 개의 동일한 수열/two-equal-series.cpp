#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr1[100] = {};
    int arr2[100] = {};
    bool same = true;

    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i=0; i < n; i++) {
        cin >> arr2[i];
    }

    std::sort(arr1, arr1+n);
    std::sort(arr2, arr2+n);

    for (int i=0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            same = false;
            break;
        }
    }

    if (!same) cout << "No";
    else cout << "Yes";
    return 0;
}