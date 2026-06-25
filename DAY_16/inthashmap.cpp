#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    vector<int> arr = {1,3,4,5,3,7,8,3,2,1,3};
    map<int, int> map;

    for(int i=0; i<arr.size(); i++)
    {
        map[arr[i]]++;
    }

    map[101] = 11;   //single traversing 

    for(auto it : map)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}