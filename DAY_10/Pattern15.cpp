#include<iostream>
using namespace std;

int main()
{
    //Reversed Increasing Letters Triangle Pattern
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=n; i>=1; i--)
    {
        char cnt = 'A';
        for(int j=1; j<=i; j++)
        {
            cout << " " << cnt;
            cnt=cnt+1;
        }
        cout << endl;
    }
    return 0;
}