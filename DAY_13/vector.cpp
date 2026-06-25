#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5, 100);
    v.push_back(200);
    v.emplace_back(400);

    //1st way of declaration
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " " << endl;
    // }

    //A way of declaration and iteration
    // vector<int>::iterator it;
    
    //A way of declaration and iteration
    // auto it =v.begin()+6;
    // cout << *it;

    //2nd Method using iterator
    for(auto it = v.begin(); it != v.end(); it++)      
    {
        cout << *it << " ";
    }     
    
    //3rd Method using raged based loop
    for(auto it : v )
    {
        cout << it << " ";
    }

    return 0;
}