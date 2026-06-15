#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;


    int res = ((a * 24 * 60 + b * 60 + c) - (11 + 11 * 60 + 11 * 60 * 24));
    
    if (res >= 0)
        cout << res;
    else cout << -1;
}