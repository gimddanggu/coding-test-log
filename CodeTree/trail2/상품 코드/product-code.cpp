#include <iostream>
#include <tuple>
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
    
    // class
    // Code c1;
    // Code c2(name, num);

    // cout << "product " << c1.num << " is " << c1.name << "\n";
    // cout << "product " << c2.num << " is " << c2.name;

    // tuple
    tuple<string, int> t1 = make_tuple("codetree", 50);
    tuple<string, int> t2 = make_tuple(name, num);

    cout << "product " << get<1>(t1) << " is " << get<0>(t1) << "\n";
    cout << "product " << get<1>(t2) << " is " << get<0>(t2);

    return 0;
}