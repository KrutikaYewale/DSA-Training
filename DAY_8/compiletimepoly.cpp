#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;

    //CONATRUCTOR OVERLOADING
    Student()
    {
        cout << "Default Constructor Called....\n";
    }

    Student(string n, int a)
    {
        cout << "Parameterized Constructor Called....\n" ;
        name = n;
        age = a;
    }

    //FUNCTION OVERLOADING
    int sum(int a, int b)   //Function no.1
    {
        return a + b;
    }

    int sum(int a, int b, int c)     //Function no.2
    {
        return a + b + c;
    }
};

int main()
{
    Student s1;
    Student s2("Krutika", 18);
    cout << "Function no.1: " << s1.sum(5, 5) << endl;
    cout << "Function no.2: " << s1.sum(5, 5, 5) << endl;

    return 0;
}