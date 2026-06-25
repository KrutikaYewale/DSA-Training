#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    cout << "First element of queue Before pop: " << q.front() << endl;   //10
    q.pop();  // deletes 10
    cout << "First element of queue After pop: " << q.front() << endl;    //20

    queue<int> temp = q;
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}