#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);
    pq.push(70);
    
    cout << "Size of Priority Queue: " << pq.size();

    cout << "First element of Priority queue Before pop: " << pq.top() << endl;   //70
    pq.pop();  // deletes 70
    cout << "First element of Priority queue After pop: " << pq.top() << endl;    //60

    priority_queue<int> temp = pq;
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}