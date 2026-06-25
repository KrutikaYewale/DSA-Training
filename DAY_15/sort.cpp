#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {12, 1, 3, 10, 50, 23, 7, 2};

        sort(v.begin()+4, v.begin()+7);            
        for(auto it : v)
        {
            cout << it << " ";
        }

        cout << endl;
        
        return 0; 
    }