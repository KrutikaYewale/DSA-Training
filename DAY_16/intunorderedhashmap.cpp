#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1,-3,4,-5,3,7,8,1,3,2,-2,-1,4,4,4,3,2,1,3};
    unordered_map<int, int> umap;

    for(int i=0; i<arr.size(); i++)
    {
        umap[arr[i]]++;
    }

    umap[101] = 11;   //single traversing 

    for(auto it : umap)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}