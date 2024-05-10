void swap(int *min, int *max)
{
    int temp = *min;
    *min = *max;
    *max = temp;
}

void BubbleSort(int arr[], int size)
{
    for (int i = size-1; i >= 0; --i)
    {
        for (int j = 0; j <= i-1; ++j)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
    }
}
