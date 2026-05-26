#include<iostream>
using namespace std;

int main()
{   
    int num;
    cout << "Enter Number:";
    cin >> num ;

    for(int i = 1; i<=10; i++){
        cout << (i*num) <<endl;
    }

    // int num = 5; 
    // for(int i = 1; i<=10; i++){
    //         cout << (i*num)<< endl;
    // }

    return 0;
}