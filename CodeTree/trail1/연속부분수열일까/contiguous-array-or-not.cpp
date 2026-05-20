#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[101];
    int arr2[101];

    for (int i=0; i < n1; i++) {
        cin >> arr1[i];
    }

    for (int i=0; i < n2; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i <= n1-n2; i++) {
        int same = true;
        for (int j = 0; j < n2; j++) {
            if (arr1[i+j] != arr2[j]) {
                same = false;
                break;
            }
        }

        if (same) {
        cout << "Yes";
        return 0;
        }
    }

    

    cout << "No";
    return 0;
}