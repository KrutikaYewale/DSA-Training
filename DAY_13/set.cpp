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
    

    return 0;
}