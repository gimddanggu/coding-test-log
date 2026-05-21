#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; 
    int cnt = 0;
    int arr1[101] = {};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];

        if (arr1[i] == 2) {
            cnt++;
        }

        if (cnt == 3) {
            cout << i+1;
            break;
        }
    }
    return 0;
}