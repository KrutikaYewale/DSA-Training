#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>ls;

    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_back(30);        // adds the element from back (adds the in the ready-made space)
    ls.emplace_back(40);     // adds the element from back (constructs its own space and then add the element)
    // ls.pop_back();        // deletes the element from back
    // ls.pop_front();       // deletes the element from front
    ls.push_front(100);      // adds the element from front
    ls.push_front(200);
    ls.push_front(300);
    ls.push_front(400);

    //1st way
    for(auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    //2nd way
    for(auto it : ls)
    {
        cout << it << " ";
    }

    cout << endl;

    cout << "First element of list: " << ls.front()<< endl;
    cout << "Last element of list: " << ls.back()  << endl;

    ls.remove(400);
    ls.remove(40);
    for(auto it : ls)
    {
        cout << it << " ";
    }


    return 0;
}