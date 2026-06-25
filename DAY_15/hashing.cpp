#include<bits/stdc++.h>
using namespace std;

//global
// int arr1[5];  //array max size approx is 10^6 out-side the int main

int main()
{
    //local
    // int arr2[100000];      //array max size approx is 10^5 in-side the int main

    int arr[9] = {1,2,3,1,5,4,1,2,3};
    int hash[6] = {0};

    for(int i=0; i<9 ; i++)
    {
        hash[arr[i]]++;
    }
    cout << hash[1];

    cout << endl;
    
    for(int i=0; i<6 ; i++)
    {
        cout << hash[i] << " ";
    }

    return 0;
}