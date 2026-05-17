#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0; // 통과한 학생
    int n;
    int score[4] = {};
    string res;

    cin >> n;

    for (int i=0; i < n; i++) {
        int sum_s = 0;
        
        for (int j=0; j < 4; j++) {
            cin >> score[j];
            sum_s += score[j];
        }
        if (sum_s / 4 >= 60) {
            res = "pass";
            cnt++;
        } else res = "fail"; 

        cout << res << "\n";
    }

    cout << cnt;
    
    return 0;
}