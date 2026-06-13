#include<iostream>
using namespace std;

class Students
{
    public:
        string name;;
        int age;
        int rollNo;

        Students(){

        }

        Students(Students &a)
        {
            cout << "Copy Constructor...\n";        
            this->name= a.name;
            this->age = a.age;
        }
};

int main()
{
    Students s1;
    s1.name = "Krutika";
    s1.age = 18;
    s1.rollNo = 9;
    cout << "S1: " << s1.name << endl;
    cout << "S1: " << s1.age << endl;
    cout << "S1: " << s1.rollNo << endl;
    Students s2(s1);
    cout << "S2: " << s2.name << endl;
    cout << "S2: " << s2.age << endl;

    return 0;

}