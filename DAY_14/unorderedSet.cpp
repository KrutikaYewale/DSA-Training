#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> us;
    us.insert(40);
    us.insert(1);
    us.insert(13);
    us.insert(39);
    us.insert(17);
    us.insert(31);
    us.insert(91);

    
    for(auto it : us)
    {
        cout << it << " ";
    }

    cout << endl;

    auto x = us.find(2);
    if(x!= us.end())
    {
        cout << "Found!!";
    }else{
        cout << "Not Found!!";
    }

    return 0;
}