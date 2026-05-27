#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    std::sort(str.begin(), str.end());


    cout << str;
    return 0;
}