#include <iostream>
#include <algorithm>

using namespace std;
class Person {
public:
    string name;
    string addr;
    string city;

    Person() = default;

    Person(string name, string addr, string city) {
        this->name = name;
        this->addr = addr;
        this->city = city;
    }
};
int main() {
    // Please write your code here.
    int n;
    Person p[10] = {};
    cin >> n;

    for (int i=0; i<n; i++) {
        string i1, i2, i3;
        cin >> i1 >> i2 >> i3;

        Person person(i1, i2, i3);
        p[i] = person;
    }

    sort(p, p+n, [](Person a, Person b) {
    return a.name < b.name;
    });

    cout << "name " << p[n-1].name << "\n";
    cout << "addr " << p[n-1].addr << "\n";
    cout << "city " << p[n-1].city << "\n";




    return 0;
}