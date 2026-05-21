#include <iostream>

using namespace std;

int N;
int nums[1000];
int count[1001];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for (int i=0; i< N; i++) {
        count[nums[i]]++;
    }

    for (int i=1000; i > 0; i--) {
        if (count[i] == 1) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
