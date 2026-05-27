#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string str[100] = {};
    
    for (int i=0; i < n; i++) {
        cin >> str[i];
    }

    std::sort(str, str+n);

    for (auto w : str) {
        cout << w << "\n";
    }
    return 0;
}