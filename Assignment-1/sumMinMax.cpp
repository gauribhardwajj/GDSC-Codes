#include <bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
{
    int maxi = INT_MIN, mini = INT_MAX;

    for (int i = 0; i < N; i++)
    {

        if (A[i] < mini)
            mini = A[i];

        if (A[i] > maxi)
            maxi = A[i];
    }

    return mini + maxi;
}

int main()
{

    int A[] = {2, 3, 5, 7, 21, 1};
    // max element: 21
    // min element: 1

    cout << "Sum of min and max elements: " << findSum(A, 6);
    return 0;
}
