#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string> ump;
    ump.insert({103, "Sanskruti"});
    ump.insert({101, "Krutika"});                          
    ump.insert({102, "Pranjal"});                                    
    ump.insert({108, "Ananya"});   
    ump.insert({101, "KKY"});                          
    ump.insert({111, "Krishna"});     
    ump.insert({111, "Mohan"});                                  

    for(auto it : ump)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;
    
    cout << ump[101];
    
    cout << endl;
    cout << endl;
    
    for(auto it = ump.begin(); it!=ump.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    cout << endl;
    
    auto it = ump.begin();
    cout << it->first;
    
    cout << endl;
    cout << endl;
    
    cout << "Size of Unordered Map: " << ump.size();
    ump.erase(101);
    cout << endl;
    for(auto it : ump)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << "Size of Unordered Map after erase: " << ump.size();
    
    cout << endl;
    cout << endl;
    
    cout << "Size of Unordered Map: " << ump.size();
    ump.clear();
    cout << endl;
    cout << "Size of Unordered Map after clear: " << ump.size();
    
    return 0;
}