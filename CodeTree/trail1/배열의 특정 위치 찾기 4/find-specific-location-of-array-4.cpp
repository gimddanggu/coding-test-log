#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int sum_a = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        
        if (arr[i] % 2 == 0) {
            cnt++;
            sum_a += arr[i];
        }
    }

    cout << cnt << " " << sum_a;
    
    return 0;
}