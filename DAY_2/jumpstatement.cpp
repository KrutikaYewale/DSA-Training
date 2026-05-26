#include<iostream>
using namespace std;

int main()
{   
    // break = terminates the code
    for (int i = 1; i<=5; i++){
        if(i==3)
        {
            break;
        }
        cout << i <<endl;
    }

    for (int j = 1; j<=5; j++){
        cout << j <<endl;
        if(j==3)
        {
            break ;
        }
    }

    // continue = skips the line after the condition is checked and is true
    for (int k = 1; k<=10; k++){
        if(k==3)
        {
            continue;
        }
        if(k==6)
        {
            continue;
        }
        if(k==9)
        {
            continue;
        }
        cout << k <<endl;
    }

    return 0;
}