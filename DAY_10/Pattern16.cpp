#include <iostream>
using namespace std;
int main() 
{    
    //Alpha-Ramp Pattern    
    int n;
    cout << "Enter Number: ";
    cin >> n;

    char ch = 'A';
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << " " << ch;
        }
        cout << endl;
        ch++;
    } 
    return 0;
}