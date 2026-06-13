#include <iostream>
using namespace std;

void oddNumber(int n)
{
    if (n < 1)
    {
        return;
    }
    oddNumber(n - 1);
    if (n % 2 != 0)
    {
        cout << n << " ";
    }
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
    oddNumber(n);
    return 0;
}