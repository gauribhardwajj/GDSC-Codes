#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr)
{

    int start = 0, mid = 0;
    int end = arr.size() - 1;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid], arr[end]);
            end--;
        }
    }

    return;
}

int main()
{

    vector<int> arr{1, 0, 1, 2, 2, 0, 0, 1};
    sort012(arr);

    for (auto &it : arr)
    {
        cout << it << " ";
    }

    return 0;
}
