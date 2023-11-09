#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s)
{

    // using sliding window

    int r = 0, l = 0, n = s.size(), ans = 0;
    unordered_map<char, int> freq;

    for (; r < n; r++)
    {

        // new element is inserted that might make the window invalid
        freq[s[r]]++;

        // until window is invalid
        for (; freq[s[r]] > 1; l++)
        {
            // make the window invalid again
            freq[s[l]]--;
        }

        ans = max(ans, r - l + 1);
    }

    return ans;
}

int main()
{

    string s = "abbbcada";

    cout << longestSubstring(s);

    return 0;
}