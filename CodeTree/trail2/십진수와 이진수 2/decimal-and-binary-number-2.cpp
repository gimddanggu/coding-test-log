#include <iostream>
using namespace std;

void make_bin(int n) {
    int cnt = 0;
    int res[11] = {};
    while(true) {
        if (n <2) {
            res[cnt] = n;
            break;
        }

        res[cnt++] = n % 2;
        n /= 2;
    }

    for (int i=cnt; i >= 0; i--) {
        cout << res[i];
    }
}

int make_ten(string n) {
    int num = 0;
    for (int i=0; i<n.size(); i++)
        num = num * 2 + (n[i]-'0');
    
    return num;
}

int main() {
    // 2 -> 10 -> * 17 -> 2
    string bin;
    cin >> bin;

    make_bin(make_ten(bin) * 17);
    return 0;
}