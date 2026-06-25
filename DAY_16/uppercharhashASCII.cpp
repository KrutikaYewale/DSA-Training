#include<bits/stdc++.h>
using namespace std;

int main()
{
    //UPPER CASE 
    string str ="AABBBBPBKKKKKPPPPPYYYKKKPPPZZZKKKSSPPSS";
    vector<int> hash(123,0);


    for(int j=0; j<str.size(); j++)
    {
        hash[str[j]]++;
    }
    cout << hash['A'];

    cout << endl;

    for(int j=0; j<123 ; j++)
    {
        cout << hash[j] << " ";
    }
    

    return 0;
}