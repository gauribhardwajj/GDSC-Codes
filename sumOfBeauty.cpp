#include <bits/stdc++.h>
using namespace std;

int beautySum(string s)
{
    int ans = 0, n = s.size();
    int maxFreq = 0, minFreq = n;

    for (int i = 0; i < n; i++)
    {

        unordered_map<char, int> freq;

        for (int j = i; j < n; j++)
        {

            freq[s[j]]++;

            for (auto &it : freq)
            {
                maxFreq = max(maxFreq, it.second);
                minFreq = min(minFreq, it.second);
            }

            ans += maxFreq - minFreq;

            minFreq = n, maxFreq = 0;
        }

        freq.clear();
    }

    return ans;
}

int main()
{
    string s = "aabcbaa";

    cout << beautySum(s);

    return 0;
}