#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int n = arr.size() - 1;

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index] < 0)
        {
            return index;
        }

        arr[index] = -arr[index];
    }

    return -1;
}

int main()
{
    vector<int> arr{1, 4, 7, 3, 5, 6, 5, 6, 2};
    cout << "Duplicate element is: " << findDuplicate(arr);
    return 0;
}