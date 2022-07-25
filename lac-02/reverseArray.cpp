/**
 * Q. Write a program to print the elements of an array in reverse order using pointer.
 * */

#include <bits/stdc++.h>

using namespace std;

void reverseArray(int *arr, int size)
{
    int start = 0, end = size - 1, t;
    while (end > start)
    {
        t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++, end--;
    }
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    reverseArray(arr, size);
    display(arr, size);
    return 0;
}