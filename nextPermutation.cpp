#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{

    int n = arr.size();
    int flag = -1;

    // finding the breaking point
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            flag = i;
            break;
        }
    }

    if (flag == -1)
    {
        // no breaking point found
        sort(arr.begin(), arr.end());
        return;
    }

    int j;
    for (j = n - 1; j > flag; j--)
    {
        if (arr[j] > arr[flag])
        {
            swap(arr[j], arr[flag]);
            break;
        }
    }

    sort(arr.begin() + flag + 1, arr.end());
}

int main()
{

    vector<int> arr{1, 3, 2};
    nextPermutation(arr);

    for (auto &it : arr)
    {
        cout << it << " ";
    }
    return 0;
}