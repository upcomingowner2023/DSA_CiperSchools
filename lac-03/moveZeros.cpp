#include <bits/stdc++.h>

using namespace std;

void moveAllZeros(int arr[], int size)
{
    int idx = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
            arr[idx++] = arr[i];
    }

    for (; idx < size; idx++)
        arr[idx] = 0;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 0, 0, 0, 3, 6};
    display(arr, 7);
    moveAllZeros(arr, 7);
    display(arr, 7);

    cout << "==============================\n";
    int arr1[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    display(arr1, 13);
    moveAllZeros(arr1, 13);
    display(arr1, 13);
    return 0;
}
