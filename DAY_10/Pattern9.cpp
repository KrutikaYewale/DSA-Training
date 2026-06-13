#include<iostream>
using namespace std;

int main()
{
    //Dimond Stra Pyramid Pattern
    int n;
    cout << "Enter Number: ";
    cin >> n;

    //upper triangle
    for(int i=0; i<=n; i++)
    {       
        //space
        for(int j=1; j<=(n-i); j++)
        {
            cout << " ";
            // cout << "-";
        }

        //star
        for(int j=1; j<=(2*i)-1; j++)
        {
            cout << "*";
        }

        //space
        for(int j=1; j<=(n-i); j++)
        {
            cout << " ";
            // cout << "-";
        }
        cout << endl;
    }

    //lower triangle
    for(int i=0; i<=n; i++)
    {
        //space
        for(int j=1; j<=(i-1); j++)
        {
            cout << " ";
            // cout << "-";
        }

        //star
        for(int j=1; j<=(2*(n-i)+1); j++)
        {
            cout << "*";
        }

        //space
        for(int j=1; j<=(i-1); j++)
        {
            cout << " ";
            // cout << "-";
        }
        cout <<endl;
    }
}