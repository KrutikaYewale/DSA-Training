#include <bits/stdc++.h>
using namespace std;

int main()
{
    // By Default Set is in increasing order/ascending order
    set<int> s;
    s.insert(39);
    s.insert(70);
    s.insert(7);
    s.insert(20);
    s.insert(67);
    s.insert(48);
    s.insert(1);
    s.insert(50);
    s.insert(50);

    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;

    auto x = s.begin();
    cout << *x;
    
    cout << endl;
    
    cout << "If the element is present in the set: " << s.count(50) << endl;
    cout << "If the element is not present in the set: " << s.count(5) << endl;
    
    auto it = s.find(39);   //points towards the memory address of 39 or will point towards the memory address of end if not in the set 
    if (it != s.end())
    {
        cout << "Found!!";
    }
    else
    {
        cout << "Not Found!!";
    }
    
    cout << endl;
    
    s.erase(s.begin());
    s.erase(67);
    
    for(auto it : s)
    {
        cout << it << " ";
    }
    
    cout << endl;
    
    //Functions or Functors -(in decreasing order/desending order)
    set<int, greater<int>> se;
    se.insert(39);
    se.insert(70);
    se.insert(7);
    se.insert(20);
    se.insert(67);
    se.insert(48);
    se.insert(1);
    se.insert(50);
    se.insert(50);
    
    
    for(auto it : se)
    {
        cout << it << " ";
    }
    
    cout << endl;
    
    auto y = se.begin();
    cout << *y;
    
    cout << endl;
    
    se.erase(se.begin());
    se.erase(67);
    
    for(auto it : se)
    {
        cout << it << " ";
    }

    return 0;
}