#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    // st.pop();           // deletes the element from top of the stack
    // cout << st.top();   // gives the top element
    // cout << st.empty();
    
    stack<int> temp = st;
    while(!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;
    
    cout << "Original Stack Size: " << st.size();
    
    cout << endl;
    
    stack<int> st1, st2;
    // st1 element
    st1.push(10);
    st1.push(20);
    st1.push(30);
    // st2 element
    st2.push(40);
    st2.push(50);
    st2.push(60);

    cout << "Stack value Before swap: " << st1.top() << " " << st2.top() << endl;
    st1.swap(st2);
    cout << "Stack value After swap: " << st1.top() << " " << st2.top() << endl;

    return 0;
}
