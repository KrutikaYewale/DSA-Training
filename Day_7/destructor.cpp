#include<iostream>
using namespace std;

class Student
{
    public: 
        string name;
        int rollno;
        int age;

        Student()
        {
            cout << "Constructor Called.....!!!!\n";
        }

        ~Student()
        {
            cout << "Destructor Called.....!!!!\n";
        }
};

int main()
{
    Student s1;
    s1.name = "Krutika";
    s1.age = 18;
    s1.rollno = 9;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollno << endl;
    
    return 0;
}