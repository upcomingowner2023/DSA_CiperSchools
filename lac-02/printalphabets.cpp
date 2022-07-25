/**
 * Q. Write a program to print all the alphabets using a pointer.
 * */

#include <bits/stdc++.h>

using namespace std;

void printAlphabets()
{
    char a = 'a';
    char *ptr = &a;
    for (int i = 0; i < 26; i++)
    {
        cout << (*ptr) << " ";
        (*ptr)++;
    }
    cout << endl;
}

int main()
{
    printAlphabets();
    return 0;
}