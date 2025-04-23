// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         char name[105];
//         int cls;
//         int id;
//         char section;
//         int math_marks;
//         int engl_marks;
//         int total_marks;
// };


// int main()
// {
//     int n;
//     cin>>n;
//     Student* student= new Student[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>student[i].name>>student[i].cls>>student[i].id>>student[i].section<<student[i].math_marks<<student[i].engl_marks;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;

   
    Student(string name, int class_, char section, int id_, int math, int eng)
        : nm(name), cls(class_), s(section), id(id_), math_marks(math), eng_marks(eng) {
        total_marks = math_marks + eng_marks;
    }

    
    bool operator<(const Student& other) const {
        if (total_marks != other.total_marks) {
            return total_marks > other.total_marks; 
        }
        return id < other.id; 
    }
};

int main() {
    int N;
    cin >> N;

    
    vector<Student> students;
    students.reserve(N); 
    
    for (int i = 0; i < N; ++i) {
        string name;
        int class_, id, math, eng;
        char section;
        cin >> name >> class_ >> section >> id >> math >> eng;
        students.emplace_back(name, class_, section, id, math, eng);
    }

  
    sort(students.begin(), students.end());

    
    for (const auto& student : students) {
        cout << student.nm << " " << student.cls << " " << student.s << " "
             << student.id << " " << student.math_marks << " " << student.eng_marks << endl;
    }

    return 0;
}
