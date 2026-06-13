#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        string email;
        int age;

        Students(){

        }

        Students(Students &originalObj)
        {
            this->age = originalObj.age;
        }

        void show()
        {
            cout << "Name of S1 is: " << name << endl;
            cout << "Email of S1 is: " << email << endl;
            cout << "Age of S1 is: " << age << endl;
        }
};

int main()
{
    Students s1;
    s1.name = "Krutika";
    s1.email = "krutika@gmail.com";
    s1.age = 18;
    Students s2(s1); 
    cout << "Name of S2 is: " << s2.name <<endl;

    return 0;
}