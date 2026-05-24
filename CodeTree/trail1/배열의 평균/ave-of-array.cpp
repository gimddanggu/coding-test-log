#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 가로 평균/ 세로 평균/ 전체 평균

    int score[2][4];

    for (int i=0; i < 2; i++) {
        for (int j=0; j < 4; j++) {
            cin >> score[i][j];
        }
    }

    // 가로 평균
    for (auto& row : score) {
        double sum_width = 0;
        for (int v : row) {
            sum_width += v;
        }
        cout << fixed;
        cout.precision(1);
        cout << sum_width / 4 << " ";
    }
    
    cout << "\n";
    // 세로 평균 
    for (int i=0; i<4; i++) {
        double sum_length = 0;
        for (int j=0; j<2; j++) {
            sum_length += score[j][i];
        }
        cout << sum_length / 2 << " ";
    }
    cout << "\n";
    // 전체 평균
    double sum_all = 0;
    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            sum_all += score[i][j];
        }
    }
    cout << sum_all / (2*4) << "\n";
    return 0;
}