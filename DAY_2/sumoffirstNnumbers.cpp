#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter numbers:";
    cin >> n;

    for(int i=1; i<=n; i++){
        sum += i;  //sum=sum+i
    }
    cout << "The sum of First " << n << " Natural numbers is " << sum <<endl;
    // cout << sum;

    return 0;
}