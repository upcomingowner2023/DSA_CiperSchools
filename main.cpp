#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return ans;
}

int main()
{
    string s = "{(([";
    if (isValid(s))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

bool isPerfectSquare(int num)
{
    long low = 1, mid = num;
    while (mid > low)
    {
        mid = (mid + low) / 2;
        if (mid * mid == num)
            return true;
        else if (mid * mid > num)
            mid -= 1;
        else
        {
            low = mid + 1;
            mid = low + mid;
        }
    }
    return false;
}

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> st, ts;

        for (int i = 0; i < s.length(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if ((st.find(c1) != st.end() && st[c1] != c2) || (ts.find(c2) != st.end() && ts[c2] != c1))
                return false;

            st[c1] = c2;
            ts[c2] = c1;
        }
        return true;
    }
};

bool validPalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while (right > left)
    {
        if (s[left] != s[right])
            return false;
        left++, right--;
    }
    return true;
}

/*

int main()
{
    Solution s;
    // 2,7,11,15  9
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = s.twoSum(numbers, target);
    for (int a : ans)
        cout << a << " ";
}

int sum = 0;
int sumOfDigits(int n)
{
    if (n <= 0)
        return 0;
    int r = n % 10;
    return r + sumOfDigits(n / 10);
}

int fab(int n)
{
    if (n > 2)
        return 1;
    return fab(n - 1) + fab(n - 2);
}
int main()
{
    cout << sumOfDigits(5) << endl;
    return 0;
}

bool check_palin(string s, int start, int end)
{
    if (start == end)
        return true;
    else if (s[start] == s[end])
        return check_palin(s, start + 1, end - 1);
    return false;
}

bool check_palin(string s)
{
    return check_palin(s, 0, s.length() - 1);
}

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << fact(5) << endl;
    // string s;
    // cin >> s;
    // if (check_palin(s))
    // {
    //     cout << "Yes.! it is a palindrome" << endl;
    // }
    // else
    // {
    //     cout << "No.! it's not palindrome" << endl;
    // }
    return 0;
}
*/