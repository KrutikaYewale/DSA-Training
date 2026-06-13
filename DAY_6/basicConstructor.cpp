#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        int age;
        
        Students()
        {
            cout << "Constructor Invoked..." << endl;
        }
};

int main()
{
    Students s1;
    Students s2;
    cout << &s1 << endl;
    cout << &s2 << endl;
    return 0;
}