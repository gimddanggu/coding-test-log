#include <iostream>
using namespace std;

int main() {
    int res[1000] = {};
    int cnt = 0;
    int n, b;
    cin >> n >> b;

    while(true) {
        if (n < b) {
            res[cnt++] = n;
            break;
        }
        res[cnt++] = n % b;
        n /= b;
    } 

    for (int i=cnt-1; i>=0; i--) {
        cout << res[i];
    }


    return 0;
}