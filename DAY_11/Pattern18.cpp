#include<iostream>
using namespace std;

int main()
{
    //Alpha-Triangle Pattern
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        // char ch='E';
        for(char j='E'-i+1; j<='E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}