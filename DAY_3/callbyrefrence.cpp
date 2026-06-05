// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 200;
//     cout << &a <<endl;
//     cout << &b <<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int change(int &x)
{
    x = 100;
    cout<<"Value of a inside function: "<<x<<endl;
}
int main()
{
    int a = 10;
    change(a);
    cout<<"Value of a inside main: "<<a;
    return 0;
}#include <iostream>
using namespace std;

int change(int &x)
{
    x = 100;
    cout<<"Value of a inside function: "<<x<<endl;
}
int main()
{
    int a = 10;
    change(a);
    cout<<"Value of a inside main: "<<a;
    return 0;
}