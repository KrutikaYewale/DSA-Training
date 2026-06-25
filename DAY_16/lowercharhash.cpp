#include<bits/stdc++.h>
using namespace std;

int main()
{
    //LOWER CASE
    string str = "abbaccdeeeeekkpppttttyyykkrrzzpppzzzkk";
    vector<int> hash(26,0);


    for(int i=0; i<str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }
    cout << hash['b'-'a'];

    cout << endl;

    for(int i=0; i<26 ; i++)
    {
        cout << hash[i] << " ";
    }
    

    return 0;
}