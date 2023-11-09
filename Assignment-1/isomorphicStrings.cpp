#include <bits/stdc++.h>
using namespace std;

bool isValid(string s, string t)
{
    unordered_map<char, char> ele;

    for (int i = 0; i < s.size(); i++)
    {

        if (ele[s[i]] != NULL)
        {
            if (ele[s[i]] != t[i])
            {
                return false;
            }
        }

        ele[s[i]] = t[i];
    }

    return true;
}

bool isIsomorphic(string s, string t)
{

    if (s.size() != t.size())
        return false;

    if (isValid(s, t) && isValid(t, s))
        return true;
    else
        return false;
}

int main()
{
    string s = "egg";
    string t = "add";
    if (isIsomorphic(s, t))
        cout << "Isomorphic";
    else
        cout << "Not Isomorphic";
    return 0;
}