#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char alp[5][3];

    for (int i=0; i < 5; i++) {
        for (int j=0; j < 3; j++) {
            cin >> alp[i][j];
            cout << (char)(alp[i][j]-32) << " ";
        }
        cout << "\n";
    }
    return 0;
}