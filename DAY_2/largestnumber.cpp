#include<iostream>
using namespace std;

int main()
{
    int a=1, b=2, c=7;
    if(a>b && a>c){
        cout << "a is largest";
    }else if(b>a && b>c){
        cout << "b is largest";
    }else {
        cout << "c is largest";
    }

    return 0;
}