#include <iostream>
using namespace std;
int main() {

    // BINARY OPERATORS
    //1.Arithmatic Operators
    int a= 10, b = 5;
    
    cout << (a+b) << endl; //15
    cout << (a-b) << endl; //5
    cout << (a*b) << endl; //50
    cout << (a/b) << endl; //2
    cout << (a%b) << endl <<endl; //0

    //2.Assignment Operator
    int c = 10;
    
    cout << (c+=2) <<endl;
    cout << (c-=2) <<endl;
    cout << (c*=2) <<endl;
    cout << (c/=2) <<endl;
    cout << (c%=2) <<endl <<endl ;
    
    //3.Relational/Comparision Operators
    int x = 10, y = 5;
    
    cout << (x>y) <<endl; //true or 1
    cout << (x<y) <<endl; //false or 0
    cout << (x==y) <<endl; //false or 0
    cout << (x!=y) <<endl; //true or 1
    cout << (x>=y) <<endl; //true or 1
    cout << (x<=y) <<endl <<endl ; //false or 0
    
    // 4.Logical Operators
    int con1 = (15 > 5); //true
    int con2 = (5 < 12); //true
    cout << (con1 && con2) << endl; //true or 1

    int con3 = (15 > 5); //true
    int con4 = (5 < 12); //true
    cout << (con3 || con4) <<endl; //true or 1

    int con5 = (15 > 5); //true
    int con6 = (5 < 12); //true
    cout << (!6) <<endl; //false or 0
    
    return 0;
}