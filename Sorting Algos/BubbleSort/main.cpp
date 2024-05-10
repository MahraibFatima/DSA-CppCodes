// Online C++ compiler to run C++ program online
#include <iostream>
#include "BubbleSort.h"
using namespace std;


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

    BubbleSort(arr, size);
    cout << "After Sorting: ";

    printArray(arr, size);
    return 0;
}