#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 2, 7, 1};
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max;
    return 0;
}