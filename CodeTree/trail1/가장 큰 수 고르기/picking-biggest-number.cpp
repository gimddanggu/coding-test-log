#include <iostream>
#include <climits>
using namespace std;

int max_func (int arr[]) {
    int max_val = INT_MIN;
    for (int i = 0; i <  10; i++) {
        if (max_val < arr[i]) max_val = arr[i];
    }

    return max_val;
}

int main() {
    // Please write your code here.
    int arr[10] = {};
    for (int i=0; i < 10; i++) {
        cin >> arr[i];
    }
    
    cout << max_func(arr);
    return 0;

}