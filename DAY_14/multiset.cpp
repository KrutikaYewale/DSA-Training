#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int, greater<int>> ms;
    ms.insert(7);
    ms.insert(70);
    ms.insert(39);
    ms.insert(39);
    ms.insert(39);
    ms.insert(20);
    ms.insert(67);
    ms.insert(48);
    ms.insert(1);
    ms.insert(50);
    ms.insert(50);
    ms.insert(50);
    ms.insert(50);
    ms.insert(50);

    for(auto it : ms)
    {
        cout << it << " ";
    }
    
    cout << endl;
    
    ms.erase(39);  //deletes all 39 at once
    for(auto it : ms)
    {
        cout << it << " ";
    }
    
    cout << endl;
    
    cout << "Number of 50 in the given set: " << ms.count(50);
    
    cout << endl;
    
    for(auto x : ms)
    {
        cout << x << " ";
    }
    auto x = ms.find(39);    //deletes only 39 out of three
    ms.erase(x);
    
    cout << endl;
    cout << "Number of 39 in the given set after deleting one 39: " << ms.count(39);

    return 0;
}