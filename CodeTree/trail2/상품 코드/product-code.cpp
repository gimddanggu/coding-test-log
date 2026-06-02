#include <iostream>
using namespace std;

class Code {
public:
    int num;
    string name;

    Code (string name="codetree", int num=50) {
        this->name = name;
        this->num = num;
    }
};

int main() {
    // Please write your code here.
    int num;
    string name;

    cin >> name >> num;
    
    Code c1;
    Code c2(name, num);

    cout << "product " << c1.num << " is " << c1.name << "\n";
    cout << "product " << c2.num << " is " << c2.name;

    return 0;
}