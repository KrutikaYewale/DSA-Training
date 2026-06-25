#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1,3,4,5,3,7,8,3,2,1,3};
    vector<int>hash(9,0);

    for(int i=0; i<v.size(); i++)    //for(int x : v)

    {
        hash[v[i]]++;
    }
    cout << hash[4];

    cout << endl;

    for(int i=0; i<9 ; i++)
    {
        cout << hash[i] << " ";
    }
    
    return 0;
}