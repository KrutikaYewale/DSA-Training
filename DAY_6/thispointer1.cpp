#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        string email;
        int age;
        
        Students(string n, string e, int a)
        {
            name = n;
            age = a;
            email = e;
        }

        void show(){
            cout << this << endl;
        }
};
int main()
{
    Students s1("Krutika", "krutika@gmail.com", 18);
    cout << "Name of S1 is: " << s1.name << endl;
    cout << "Email of S1 is: " << s1.email << endl;
    cout << "Age of S1 is: " << s1.age << endl << endl;

    Students s2("Sana", "sana@gmail.com", 18);
    cout << "Name of S2 is: " << s1.name << endl;
    cout << "Email of S2 is: " << s1.email << endl;
    cout << "Age of S2 is: " << s1.age << endl << endl;

    cout << &s1 << endl;
    s2.show();
 
    return 0;
}
