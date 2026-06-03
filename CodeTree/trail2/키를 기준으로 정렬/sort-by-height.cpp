#include <iostream>
#include <algorithm>

using namespace std;

class Person {
public:
    string name;
    int height;
    int weight;

    Person() = default;

    Person(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

int main() {
    // Please write your code here.
    int n;
    Person p[10] = {};
    cin >> n;

    for (int i=0; i<n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        p[i] = Person(name, height, weight);
    }

    sort(p, p+n, [](const Person& p1, const Person& p2) {
        return p1.height < p2.height;
    });

    for (int i=0; i < n; i++) {
        cout << p[i].name << " " << p[i].height << " " << p[i].weight << "\n";
    }
    return 0;
}