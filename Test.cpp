#include <bits/stdc++.h>
using namespace std;

void reversed(string &s, int l, int r)
{

    while (l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

string reverseString(string str)
{

    str.insert(str.end(), ' ');

    int n = str.length();

    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (str[i] == ' ')
        {
            reversed(str, j, i - 1);
            j = i + 1;
        }
    }

    str.pop_back();
    reversed(str, 0, str.length() - 1);

    return str;
}

int main()
{
    string str = "I like this code";

    string rev = reverseString(str);

    cout << rev;
    return 0;
}

/*
int minimumNumber(int n, string password)
{
    int con = 0;
    bool a[4] = {false};

    for (int i = 0; i < password.length(); i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
            a[0] = true;
        else if (password[i] >= 'a' && password[i] <= 'z')
            a[1] = true;
        else if (password[i] >= '0' && password[i] <= '9')
            a[2] = true;
        else
            a[3] = true;
    }
    for (int i = 0; i < 4; i++)
        if (!a[i])
            con++;

    return max(con, 6 - n);
}

int main()
{
    cout << minimumNumber(3, "Ab1") << endl;
    cout << minimumNumber(11, "#HackerRank") << endl;
    return 0;
}

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        backtracking(ans, "", 0, 0, n);
        return ans;
    }

private:
    void backtracking(vector<string> &ans, string cur_s, int open, int close, int max)
    {

        if (max * 2 == cur_s.size())
        {
            ans.push_back(cur_s);
            return;
        }

        if (open < max)
            backtracking(ans, cur_s + "(", open + 1, close, max);
        if (close < open)
            backtracking(ans, cur_s + ")", open, close + 1, max);
    }
};
*/