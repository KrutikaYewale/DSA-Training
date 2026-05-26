#include<iostream>
using namespace std;

int main()
{
    int marks = 0;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"A+";
    }else if(marks>=80 && marks<90){
        cout<<"A"; //if(marks>=80 && marks<=89) can also be used
    }else if(marks>=70 && marks<80){
        cout<<"B"; //if(marks>=80 && marks<=79) can also be used
    }else if(marks>=60 && marks<70){
        cout<<"C"; //if(marks>=80 && marks<=69) can also be used
    }else{
        cout<<"Failed!!!";
    }
    return 0;
}
