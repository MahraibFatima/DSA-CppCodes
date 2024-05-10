#include <iostream>
using namespace std;

void swap(int *min, int *max)
{
    int temp = *min;
    *min = *max;
    *max = temp;
}

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < size; ++j)
            if (arr[min] > arr[j])
                min = j;

        if (i != min)
            swap(arr[min], arr[i]);
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

    SelectionSort(arr, size);
    cout << "After Sorting: ";

    printArray(arr, size);
    return 0;
}