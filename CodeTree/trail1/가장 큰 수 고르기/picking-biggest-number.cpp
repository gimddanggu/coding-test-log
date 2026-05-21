#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10] = {};
    int max_val = INT_MIN;
    for (int i=0; i < 10; i++) {
        cin >> arr[i];

        if (max_val < arr[i]) max_val = arr[i];
    }
    
    cout << max_val;
    return 0;

}