#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        int rollno;
        
        Students(string n, int r)
        {
            cout << "Parameterized Constructor..." << endl;
                name = n;
                rollno = r;

            cout << "Name: " << name << endl;
            cout << "Roll No.: " << rollno << endl << endl;

        }
};

int main()
{
    Students s1("Krutika", 9);
    Students s2("Sana", 10);
    Students s3("Sharanya", 11);
    return 0;
}