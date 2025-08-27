#include <bits/stdc++.h>

using namespace std;

class Student{

private:
    string name;
    int id;

public:
    Student(string t_name, int t_id)
    {
        name = t_name;
        id = t_id;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Id  : " << id << endl;
    }
};

class University{

private:
    vector<Student*>student;

public:
    void new_student(Student &temp)
    {
        student.push_back(&temp);
    }

    void show_all()
    {
        for( int i = 0; i < student.size(); i++ )
        {
            cout << "Student " << i << endl;

            student[i]->show();

            cout << endl;
        }
    }
};

int main()
{
    University UGV;

    Student Imran("Md Imran Khan Siam", 12221110), Puja("Puja Baral", 12221131);

    UGV.new_student(Imran);
    UGV.new_student(Puja);

    UGV.show_all();
}
