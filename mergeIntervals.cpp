#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back({intervals[0]});

    for (int i = 1; i < intervals.size(); i++)
    {

        int start = intervals[i][0];
        int end = intervals[i][1];

        if (start <= ans.back()[1])
        {
            ans.back()[0] = min(ans.back()[0], start);
            ans.back()[1] = max(ans.back()[1], end);
        }

        else
            ans.push_back({start, end});
    }

    return ans;
}

int main()
{

    vector<vector<int>> arr{{1, 4}, {2, 4}, {7, 9}, {12, 17}, {6, 8}};

    vector<vector<int>> ans = mergeIntervals(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    return 0;
}