#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    double score[100];
    double res, sum;
    string hak;
    cin >> N;
    sum = 0;
    for (int i = 0 ; i < N; i++) 
    {
        cin >> score[i];
        sum += score[i];
    }

    cout << fixed;
    cout.precision(1);
    res = sum / N;

    if (res >= 4.0) hak = "Perfect";
    else if (res >= 3.0) hak = "Good";
    else hak = "Poor";
    
    cout << res;
    cout << "\n" << hak;
    
    return 0;
}