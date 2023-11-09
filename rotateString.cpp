#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    for (int k = 0; k < s.size(); k++)
    {

        // perform k shifts on s
        string temp = s;
        for (int i = 0; i < s.size(); i++)
        {
            temp[i] = s[(i + k) % s.size()];
        }

        if (temp == goal)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    string s = "abcde";
    string goal = "cdeab";

    if (rotateString(s, goal))
        cout << "True";
    else
        cout << "False";
    return 0;
}