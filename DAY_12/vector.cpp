#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int>v;     //empty array
    // v.push_back(40);
    // v.push_back(50);
    // cout << v[0] << " " <<v[1];

    // vector<int>v = {10, 20, 30};     // with direct initialization and declaration
    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;

    // vector<int> v(5,10);         //instance
    // for(int i= 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout << "Size of Array: " << v.size() << endl;

    // cout << v.pop_back();    //delete element from back
    
    // v.emplace_back(60);
    // cout<< v[4];

    // 2. for(auto i=v.begin(); i!=v.end();i++)       // points to the memory address
    // {
    //     cout << *i << " ";
    // }                                   
    
    // 1. cout << *v.begin()+1;

    // auto it = v.begin()+3;
    // cout << *it;

    //3. Range based loop
    // for(auto it : v)
    // {
    //     cout << it << " ";   
    // }

    // cout << v.front() << " ";
    // cout << v.back() << " ";

    // cout << v.empty();     //if the stl vector is empty then 0 && if the stl vector is not empty then 1

    // cout << "Before clear: " << v.size() << endl;
    // v.clear();
    // cout << "After clear: " << v.size() << endl;

    //                                   //or auto it = v.begin()+3; 
    // v.erase(v.begin()+3);             //or v.erase(it)
    // for(auto x : v)
    // {
    //     cout << x << " ";
    // }

    // v.erase(v.begin(), v.begin()+2);             
    // for(auto x : v)
    // {
    //     cout << x << " ";
    // }

    // v.insert(v.begin()+1,15);
    // v.insert(v.begin()+2,25);
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }

    for(auto i=v.rbegin(); i!=v.rend();i++)       
    {
        cout << *i << " ";
    }        

    return 0;
}