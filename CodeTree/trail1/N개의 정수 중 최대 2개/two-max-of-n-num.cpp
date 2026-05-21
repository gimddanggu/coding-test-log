#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int first = A[0];
    int second = A[1];

    if (second > first) {
        int tmp = first;
        first = second;
        second = tmp;
    }

    for (int i=2; i < N; i++) {
        if (first < A[i]) {
            int tmp = first;
            first = A[i];
            second = tmp;
        }

        else if (second < A[i]) 
            second = A[i];
    }

    cout << first << " " << second;
    // Please write your code here.

    return 0;
}
