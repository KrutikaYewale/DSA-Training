#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        string email;
        int age;
        
        Students(string name, string email, int age)
        {
            this->name = name;
            this->email = email;
            this->age = age;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Email: " << email << endl;
            cout << "Age: " << age << endl <<endl;
        }
};
int main()
{
    Students s1("Krutika", "krutika@gmail.com", 18);
    s1.display();

    Students s2("Sana", "sana@gmail.com", 18);
    s2.display();
 
    return 0;
}
