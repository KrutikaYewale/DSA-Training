#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {100, 10, 70, 15, 9, 200, 39};

        sort(v.begin(), v.end(), greater<int>());            
        for(auto it : v)
        {
            cout << it << " ";
        }

        cout << endl;
        cout << endl;

    //sort for ascending order
    vector<int>ve = {100, 10, 70, 15, 9, 200, 39};

        sort(ve.begin(), ve.end());            
        for(auto x : ve)
        {
            cout << x << " ";
        }

        cout << endl;
        cout << endl;

        int arr[7] = {100, 10, 70, 15, 9, 200, 39};
        sort(arr, arr+7, greater<int>());
        for(int i=0; i<7; i++)
        {
            cout << arr[i] << " ";
        }


        cout << endl;
        cout << endl;

        int array[7] = {100, 10, 70, 15, 9, 200, 39};
        sort(array, array+3, greater<int>());
        for(int i=0; i<7; i++)
        {
            cout << array[i] << " ";
        }

    return 0;
}