#include <bits/stdc++.h>

using namespace std;

string reverseString(string s)
{
    int start = 0, end = s.size() - 1;
    while (end > start)
    {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++, end--;
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    s = reverseString(s);
    cout << s << endl;
    return 0;
}