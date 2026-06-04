#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 10

class Student {
public:
    string name;
    int sub1, sub2, sub3;

    Student() = default;
    Student(string name, int sub1, int sub2, int sub3) {
        this->name = name;
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
    };
};

bool cmp(const Student& s1, const Student& s2) {
    return s1.sub1 + s1.sub2 + s1.sub3 < s2.sub1 + s2.sub2 + s2.sub3;
} 

int main() {
    // Please write your code here.
    int n;
    Student students[MAX] = {};
    cin >> n;

    for (int i=0; i<n; i++) {
        string name;
        int sub1, sub2, sub3;
        cin >> name >> sub1 >> sub2 >> sub3;

        students[i] = Student(name, sub1, sub2, sub3);
    }

    sort(students, students+n, cmp);

    for (int i=0; i<n; i++) {
        cout << students[i].name << " " << students[i].sub1 << " " << students[i].sub2 << " " << students[i].sub3 << "\n";
    }

    return 0;
}