#include<iostream>
using namespace std;

int main()
{
    // without direct initialization and declaration
    // pair<int, int>p;

    // p.first = 10;
    // p.second = 20;

    // cout << p.first << endl;
    // cout << p.second << endl;

    
    // with direct initialization and declaration
    // pair<int, string>p = {9, "Krutika"};

    // cout << p.first << endl;
    // cout << p.second << endl;

    // pair<int, pair <int, int>> p = {10, {20, 30}};

    // cout << p.first << endl;
    // cout << p.second.first << endl;
    // cout << p.second.second << endl;

    pair<pair<int ,string>, pair <int, string>> p = {{10, "krutika"}, {20, "sana"}};

    cout << p.first.first << endl;
    cout << p.first.second << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    

    return 0;
}