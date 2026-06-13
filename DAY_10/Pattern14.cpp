#include<iostream>
using namespace std;

int main()
{
    //Increasing Letter Triangle Pattern
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        char cnt = 'A';
        for(int j=1; j<=i; j++)
        {
            cout << " " << cnt;
            cnt=cnt+1;
        }
        cout << endl;
    }

    // // cout << "OR"

    // int n;
    // cout << "Enter Number: ";
    // cin >> n;

    // for(int i=1; i<=n; i++)
    // {
    //     for(char ch='A'; ch<'A'+ i; ch++)
    //     {
    //         cout << " " << ch;
    //     }
    //     cout << endl;
    // }
    return 0;
}