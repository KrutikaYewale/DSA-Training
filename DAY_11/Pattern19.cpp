#include<iostream>
using namespace std;

//Symmatric-Void Pattern
void upperPart(int n)
{
    //upper triangle
    int space=0;
    for(int i=1; i<=n; i++)
    {       
        //star
        for(int j=1; j<=(n-i+1); j++)
        {
            cout << "*";
            // cout << "-";
        }

        //space
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }

        //star
        for(int j=1; j<=(n-i+1); j++)
        {
            cout << "*";
            // cout << "-";
        }
        cout << endl;
        space+=2;
    }
}

void lowerPart(int n)
{
    //lower triangle
    // int space = 0;
    for(int i=0; i<=n; i++)
    {
        //star
        for(int j=1; j<=i; j++)
        {
            cout << "*";
            // cout << "-";
        }

        //space
        for(int j=1; j<=(2*(n-i)); j++)
        {
            cout << " ";
        }

        //star
        for(int j=1; j<=i; j++)
        {
            cout << "*";
            // cout << "-";
        }
        cout <<endl;
        // space -=2;
    }
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    upperPart(n);
    lowerPart(n);
    return 0;
    
}