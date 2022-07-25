

#include <bits/stdc++.h>

namespace sorting
{
    /**
     *      This function takes last element as pivot, places
     *      the pivot element at its correct position in sorted
     *      array, and places all smaller (smaller than pivot)
     *      to left of pivot and all greater elements to right
     *      of pivot
     *
     */

    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high]; // taking the last element as pivot
        int i = (low - 1);     // Index of smaller element

        for (int j = low; j < high; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (arr[j] <= pivot)
            {
                i++; // increment index of smaller element
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return (i + 1);
    }

    /**
     *      The main function that implements QuickSort
     *      arr[] --> Array to be sorted,
     *      low --> Starting index,
     *      high --> Ending index
     */
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int p = partition(arr, low, high);
            quickSort(arr, low, p - 1);
            quickSort(arr, p + 1, high);
        }
    }

} // namespace sorting

using sorting::quickSort;

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

/** Driver program to test above functions */
int main()
{
    int size;
    std::cout << "\nEnter the number of elements : ";

    std::cin >> size;

    int *arr = new int[size];

    std::cout << "\nEnter the unsorted elements : ";

    for (int i = 0; i < size; ++i)
    {
        std::cout << "\n";
        std::cin >> arr[i];
    }
    quickSort(arr, 0, size);
    std::cout << "Sorted array\n";
    show(arr, size);
    delete[] arr;
    return 0;
}