#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int num = 0;

    for (int i=0; i<n.size(); i++) {
        num = num * 2 + (n[i]- '0');
    }
    
    cout << num;
    return 0;
}