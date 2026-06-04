#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 10

class Student {
public:
    string name;
    int kor, eng, mat;

    Student() = default;
    Student(string name, int kor, int eng, int mat) {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    };
};

bool cmp(const Student& s1, const Student& s2) {
    if (s1.kor == s2.kor)
    {
        if (s1.eng == s2.eng)
            return s1.mat > s2.mat;
        
        return s1.eng > s2.eng;
    }

    return s1.kor > s2.kor;
}

int main() {
    // Please write your code here.
    int n;
    Student students[MAX] = {};
    cin >> n;

    for (int i=0; i<n; i++) {
        string name;
        int kor, eng, mat;
        cin >> name >> kor >> eng >> mat;

        students[i] = Student(name, kor, eng, mat);
    }


    sort(students, students+n, cmp);
    for (int i=0; i<n; i++)
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].mat << "\n";
    
    return 0;
}