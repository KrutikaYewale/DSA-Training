#include <iostream>
using namespace std;
int main() {    
    
    // Rectangle Star Pattern 
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << "*";
        }
        cout << endl;
    } 
    return 0;
}