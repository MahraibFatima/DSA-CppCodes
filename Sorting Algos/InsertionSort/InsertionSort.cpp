#include <iostream>
using namespace std;

void swap(int *min, int *max)
{
    int temp = *min;
    *min = *max;
    *max = temp;
}

void InsertionSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; ++i)
    {
        for (int j = i; j>0 ; --j)
            if (arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]);     
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {4, 5, 3, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    printArray(arr, size);

    InsertionSort(arr, size);
    cout << "After Sorting: ";

    printArray(arr, size);
    return 0;
}