#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double score[10];
    double sum_score = 0;
    for (int i=0; i < 8; i++) {
        cin >> score[i]; 
        sum_score += score[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum_score / 8;
    return 0;
}