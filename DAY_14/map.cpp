#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp = {{103, "Sanskruti"}, {108, "Ananya"}};   //1st way to add element in map
    mp.insert({101, "Krutika"});                                   //2nd way to add element in map
    mp.emplace(102, "Pranjal");                                    //3rd way to add element in map
    mp[111] = "Krishna";                                           //4th way to add element in map

    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    
    cout << endl;

    cout << mp[103];
    
    cout << endl;
    cout << endl;
    
    mp[111]="KKY";
    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    
    cout << endl;

    mp.erase(108);
    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }


    return 0;
}