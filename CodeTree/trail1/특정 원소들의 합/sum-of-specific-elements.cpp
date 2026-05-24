#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 2차원 배열 입력받기
    int arr[4][4];
    int num_sum = 0;
    for (int i=0; i < 4; i++) {
        for (int j=0; j < 4; j++) {
            cin >> arr[i][j];
        }
    } 


    for (int i=0; i < 4; i++) {
        for (int j=i; j < 4; j++) {
            // cout << arr[j][i] << " ";
            num_sum += arr[j][i];
        }
    } 

    cout << num_sum;
    return 0;
}