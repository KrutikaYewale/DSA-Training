#include <iostream>
using namespace std;
int main() {    
    
    //Inverted Right Angled Triangle Pattern5
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i)+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    } 
    
    return 0;
}