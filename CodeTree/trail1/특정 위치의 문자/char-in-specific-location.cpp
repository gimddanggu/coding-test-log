#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char word[] = "LEBROS";
    char inputC;
    cin >> inputC;
    int n = -1;

    for (int i=0; i < sizeof(word); i++) {
        if (word[i] == inputC) {
            n = i;
        }
    }

    if (n == -1) cout << "None";
    else cout << n;
    
    return 0;
}