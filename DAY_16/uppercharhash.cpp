#include<bits/stdc++.h>
using namespace std;

int main()
{
    //UPPER CASE 
    string str ="AABBBBPBKKKKKPPPPPYYYKKKPPPZZZKKKSSPPSS";
    vector<int> hash(26,0);


    for(int j=0; j<str.size(); j++)
    {
        hash[str[j] - 'A']++;
    }
    cout << hash['B'-'A'];

    cout << endl;

    for(int j=0; j<26 ; j++)
    {
        cout << hash[j] << " ";
    }
    

    return 0;
}