#include<iostream>
using namespace std;

class Students
{
    public:
        string name;
        int age;
        
        Students()
        {
            cout << "Default Constructor..." << endl;
        }
};

int main()
{
    Students s1;
    return 0;
}