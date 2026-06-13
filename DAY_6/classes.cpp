#include<iostream>
using namespace std;

class Students{

    public:
        string name;
        string email;
        int age;

};

int main()
{

    Students s1;
    s1.name = "Krutika";
    s1.email = "krutika@gmail.com";
    s1.age = 18;
    cout << s1.name << endl << s1.email << endl << s1.age << endl ;

    return 0;
}