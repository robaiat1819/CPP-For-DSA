#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;

    Student(string name = "", int cls = 0, string section = "", int id = 0, int math_marks = 0, int eng_marks = 0) {
        this->nm = name;
        this->cls = cls;
        this->s = section;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }
};

bool cmp(Student a, Student b) {
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    return a.id < b.id;
}

int main() {
    int N;
    cin >> N;

   
    Student* students = new Student[N];

    for (int i = 0; i < N; i++) {
        string name;
        int cls;
        string section;
        int id;
        int math_marks;
        int eng_marks;

        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;

        
        students[i] = Student(name, cls, section, id, math_marks, eng_marks);
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

   
    delete[] students;

    return 0;
}
