#include <bits/stdc++.h>

using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    display(arr, size);
    // int t = arr[k % size];
    for (int i = k; i < size; i++)
    {
        cout << i << " " << k << " " << (i + k) % size << endl;
        int t = arr[(i + k) % size];
        arr[(i + k) % size] = arr[i];
        arr[i] = t;
    }
    // arr[size - 1] = t;
    display(arr, size);
}