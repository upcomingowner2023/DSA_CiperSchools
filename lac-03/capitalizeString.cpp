#include <bits/stdc++.h>

using namespace std;

string capitalize(string s)
{
    if ((s[0] >= 97 && s[0] <= 122))
        s[0] = s[0] - 32;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == ' ' && (s[i] >= 97 && s[i] <= 122))
            s[i] = s[i] - 32;
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    s = capitalize(s);
    cout << s << endl;
    return 0;
}