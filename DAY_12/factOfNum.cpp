#include<iostream>
using namespace std;

int main()
{
    int n, num=1;
    cout<<"Enter number: ";
    cin>>num;

    for(int i=1; i<=n; i++)
    {
        num=num*i;
    }
    cout<<num;
    return 0;
}