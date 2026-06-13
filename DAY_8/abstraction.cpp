#include<iostream>
using namespace std;

class Car
{
    private:
        void fuelCheck()
        {
            cout << "Checking Fuel....\n";
        }

        void batteryCheck()
        {
            cout << "Checking Battery....\n";
        }

    public:     
        void start()
        {
            fuelCheck();
            batteryCheck();
            cout << "Car Starting....";
        }

};

int main()
{
    Car c1;
    // c1.fuelCheck();    does not works as it is declared in private and will show error
    // c1.batterCheck();  does not works as it is declared in private and will show error
    c1.start();


    return 0;
}