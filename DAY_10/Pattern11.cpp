#include<iostream>
using namespace std;

int main()
{
    //Binary Number Triangle Pattern
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        int initialValue=1;
        if(i%2 == 0)
        {
            initialValue = 0;
        }

        for(int j=1; j<=i; j++)
        {
            cout << initialValue;
            initialValue = 1- initialValue;
        }
        cout << endl;
    }
return 0;
}