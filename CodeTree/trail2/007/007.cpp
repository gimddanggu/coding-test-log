#include <iostream>
#include <string>

using namespace std;



class A {
public:
    string a, b, c;

    A (string a, string b, string c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main() {
    string secret_code;
    string meeting_point;
    string time;
    cin >> secret_code >> meeting_point >> time;

    A sol = A(secret_code, meeting_point,  time);    

    cout << "secret code : " << sol.a << "\n";
    cout << "meeting point : "<< sol.b << "\n";
    cout << "time : " << sol.c << "\n";



    // Please write your code here.

    return 0;
}