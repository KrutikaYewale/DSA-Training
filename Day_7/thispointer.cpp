#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        int age;
        
        Students()
        {
            cout << "Non-Paramrtrised Constructor..." << endl;
            cout << "Memory Address from 'this' pointer: " << this << endl;
        }
};

int main()
{
    Students s1;
    cout << "Memory Address from Address of Operstor: " << &s1 << endl;
    return 0;
}