/**
 * Q.Write a program to count the number of vowels and consonants in a string using a
pointer.
 * */
#include <bits/stdc++.h>

using namespace std;

void countVowelsAndConsonants(string &s)
{
    int tv = 0, tc = 0, idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            tv++;
        else
            tc++;
    }
    cout << "Total vowels are " << tv << endl;
    cout << "Total Consonants are " << tc << endl;
}

int main()
{
    string s;
    cout << "Enter any string: ";
    cin >> s;
    countVowelsAndConsonants(s);
}