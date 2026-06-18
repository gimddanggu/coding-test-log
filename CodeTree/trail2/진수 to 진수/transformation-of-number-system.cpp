#include <iostream>
using namespace std;

int make_ten(int a, string n) {
    if (a == 10) return stoi(n);
    
    int num = 0;
    for(int i=0; i<n.size(); i++) {
        num = num * a + (n[i] - '0');
    }

    return num;
}

void make_jinsu(int n, int b) {
    int cnt = 0; 
    int res[10] = {};

    while(true) {
        if (n < b) {
            res[cnt] = n;
            break;
        }

        res[cnt++] = n % b;
        n /= b;
    }

    for(int i=cnt; i>=0; i--) {
        cout << res[i];
    }
}

int main() {
    int a, b;
    string n;
    cin >> a >> b >> n;

    make_jinsu(make_ten(a, n), b);

    
    return 0;
}