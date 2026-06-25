#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> mmp;
    mmp.insert({103, "Sanskruti"});
    mmp.insert({101, "Krutika"});                          
    mmp.insert({102, "Pranjal"});                                    
    mmp.insert({108, "Ananya"});   
    mmp.insert({101, "KKY"});                          
    mmp.insert({111, "Mohan"});                                  
    mmp.insert({111, "Krishna"});                                  
    
    for(auto it : mmp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // cout << mmp[111];     //Random access not possible
    
    cout << "Size of Map: " << mmp.size();

    mmp.clear();

    cout << endl;
    
    cout << "Size of Map after clear: " << mmp.size();

    cout << endl;

    cout << mmp.empty();
    
    return 0;
}