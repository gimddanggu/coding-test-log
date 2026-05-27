#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    // Please write your code here.
    char str1[100001], str2[100001];
    bool same = true;
    cin >> str1 >> str2;


    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

    if (str1Len != str2Len) {
        cout << "No";
        return 0;
    }

    std::sort(str1, str1 + str1Len);
    std::sort(str2, str2 + str2Len);

    for (int i=0; i < str1Len; i++) {
        if (str1[i] != str2[i]) { 
            same = false;
            break;
        }
    }


    if (!same) cout << "No";
    else cout << "Yes";

    return 0;
}