#include <iostream>
using namespace std;
int main() {    

    //Inverted Star Pyramid Pattern 
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=1; i<=n; i++)
        {   //space
            for(int j=1; j<=(i-1); j++)
            {
                cout << " ";
                //cout << "-";
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
                //cout << "-";
            }
            cout <<endl;
        }

    return 0;
}
    