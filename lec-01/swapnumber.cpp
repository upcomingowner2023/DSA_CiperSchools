#include <bits/stdc++.h>

using namespace std;

/**
 * Using 3rd variable
 * */
void swapWith3Variable(int num1, int num2)
{
    cout << "Num1: " << num1 << " Num2:" << num2 << endl;
    int t = num1;
    num1 = num2;
    num2 = t;
    cout << "Num1: " << num1 << " Num2:" << num2 << endl;
}

/**
 * Without using 3rd variable
 * */
void swapWithout3Variable(int num1, int num2)
{
    cout << "Num1: " << num1 << " Num2:" << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Num1: " << num1 << " Num2:" << num2 << endl;
}

/**
 * Using XOR (^) operator
 * */
void swapUsingBitXOR(int num1, int num2)
{
    cout << "Num1: " << num1 << " Num2:" << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "Num1: " << num1 << " Num2:" << num2 << endl;
}

int main()
{
    int a = 10, b = 20;
    swapWith3Variable(a, b);
    swapWithout3Variable(a, b);
    swapUsingBitXOR(a, b);
    return 0;
}