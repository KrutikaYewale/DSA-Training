#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abbaccdeeeeekkpppttttyyykkrrzzpppzzzkk";
    // string str = "abbaccdeeeeekSSSkpppttRRRttyyykVVVkrrSSSzzpppzzzkk";
    vector<int> hash(123,0);


    for(int i=0; i<str.size(); i++)
    {
        hash[str[i]]++;
    }
    cout << hash['a'];

    cout << endl;

    for(int i=0; i<123 ; i++)     //this or
    {
        cout << hash[i] << " ";
    }

    cout << endl;
    cout << endl;

    for(auto it : hash)       //this
    {
        cout << it << " ";
    }
    return 0;
}