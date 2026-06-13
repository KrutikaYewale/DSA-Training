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
};
int main()
{
    Students s1("Krutika", "krutika@gmail.com", 18);   //every thing written inside the '()' paranthesis is the parameterized constructor  
    cout << "Name of S1 is: " << s1.name << endl;
    cout << "Email of S1 is: " << s1.email << endl;
    cout << "Age of S1 is: " << s1.age << endl;
    return 0;
}