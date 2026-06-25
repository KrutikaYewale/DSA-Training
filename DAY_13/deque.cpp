#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    // dq.pop_back();        // deletes the element from back
    // dq.pop_front();       // deletes the element from front
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);

     //1st way
    for(auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    //2nd way
    for(auto it : dq)
    {
        cout << it << " ";
    }   

    cout << endl;

    cout << "First element of list: " << dq.front()<< endl;
    cout << "Last element of list: " << dq.back()  << endl;

    return 0;
}