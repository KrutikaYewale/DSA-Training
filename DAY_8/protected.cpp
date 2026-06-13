#include<iostream>
using namespace std;

class Parent 
{
    protected:
        string name = "Krutika"; 
};

class Child : protected Parent 
{
    public:
        void getData()
        {
            cout << name;
        }
};

int main()
{
    Child c1;
    c1.getData();

    // Parent p1;    does not prints as the data is protected
    // p1.name;      does not prints as the data is protected

    return 0;
}