#include<iostream>
using namespace std;

//FUNCTION OVERRIDING
class Animal
{
    public:
        string name;
        int age;

        void eat()
        {
            cout << "Eating....";
        }

        void sound()
        {
            cout << "Sound....";
        }
};

class Dog : public Animal
{
    public:
    void sound()
    {
        cout << "Boww Bowwww...." << endl;
    }
};

class Cat : public Animal
{
    public:
    void sound()
    {
        cout << "Meoww Meowwww...." << endl;
    }
};

class Tiger : public Animal
{
    public:
    void sound()
    {
        cout << "Roarr Roarrrr...." << endl;
    }
};

int main()
{
    Dog d1;
    d1.sound();
    
    Cat c1;
    c1.sound();

    Tiger t1;
    t1.sound();

    return 0;
}