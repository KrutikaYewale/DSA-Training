#include<iostream>
using namespace std;

int y = 20; //global variable

int main()
{
    int x = 10,z = 30; //local variable
    cout<<(x+y)<<endl;
    cout<<(z+y)<<endl;
    
    return 0;
}
