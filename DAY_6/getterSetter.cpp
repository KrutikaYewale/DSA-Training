#include<iostream>
using namespace std;

class Students{

    private:
        string name = "Krutika";
        string email = "krutika@gmail.com";
        int age = 18;

    public:
        void getData(){
            cout << name << endl;
            cout << email << endl;
            cout << age << endl;
        }

        void setData(){
            name = "Sana";
        }

};

int main()
{

    Students s1;
    s1.setData();
    s1.getData();
    return 0;
}