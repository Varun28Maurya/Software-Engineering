#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {0, 2, 1, 1, 2, 0};

    sort(begin(arr), end(arr));

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//O(n log n)
//Space O(1)