#include<iostream>
using namespace std;

class Students
{
    public:
        string name = "Krutika";
        string email = "krutika@gmail.com";
        int age = 18;

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

    Students s2(s1);
    s2.show();

    return 0;
}