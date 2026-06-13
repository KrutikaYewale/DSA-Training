#include<iostream>
using namespace std;

//SINGLE INHERITANCE

class Animal     //parent/base/super class
{
    public:
        string name;
        int age;
        string color;

        void eat()
        {
            cout << "Eating...." << endl;
        }

        void sleep()
        {
            cout << "Sleeping...." << endl;
        }

        void walk()
        {
            cout << "Walking...." << endl;
        }
};

class Dog : public Animal     //child/derived class
{
    public:
    void bark()
    {
        cout << "Boww boww...." << endl;
    }
};

class Human : public Animal
{
    public:
    void think()
    {
        cout << "BrainStroming...." << endl;
    }
};

int main()
{
    Dog d1;
    d1.name = "Tommy";
    d1.age = 10;
    cout << "Name: " << d1.name << endl;
    cout << "Age: " << d1.age << endl;
    d1.eat();
    d1.sleep();
    d1.walk();
    d1.bark();

    Human h1;
    h1.name = "Sana";
    h1.age = 18;
    cout << "Name: " << h1.name << endl;
    cout << "Age: " << h1.age << endl;
    h1.eat();
    h1.sleep();
    h1.walk();
    h1.think();

    return 0;
}