#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    int bin[20] = {};

    int cnt = 0;
    while(true) {
        if (n < 2) {
            bin[cnt++] = n;
            break;
        }  
        bin[cnt++] = n % 2;
        n /= 2;
    }

    for (int i=cnt-1; i>=0; i--) cout << bin[i];

    return 0;
}