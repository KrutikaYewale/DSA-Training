#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        string email;
        int age;
        int rollno;
        
        Students(string name, string email, int age, int rollno)
        {
            this->name = name;
            this->email = email;
            this->age = age;
            this->rollno = rollno;
        }

        void show(){
            cout << "Name: " << name << endl;
            cout << "Email: " << email << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollno << endl <<endl;
        }
};
int main()
{
    Students s1("Krutika", "krutika@gmail.com", 18, 9);
    s1.show();

    Students s2("Sana", "sana@gmail.com", 18, 10);
    s2.show();
 
    return 0;
}
