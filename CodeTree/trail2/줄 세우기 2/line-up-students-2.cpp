#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
    int height;
    int weight;
    int num;

    Student(int height, int weight, int num) {
        this->height = height;
        this->weight = weight;
        this->num = num;
    }

    Student() = default;
};

bool cmp(const Student& s1, const Student& s2) {
    if (s1.height == s2.height)
        return s1.weight > s2.weight;
    return s1.height < s2.height;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Student students[1000] = {};
    
    for(int i=0; i<n; i++) {
        int height, weight;
        cin >> height >> weight;

        students[i] = Student(height, weight, i+1);
    }

    sort(students, students+n, cmp);

    for (int i=0; i<n; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].num << "\n";
    }
    return 0;
}