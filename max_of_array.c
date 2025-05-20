//Maximum value of an array.
#include <stdio.h>
#include "wasiy_array.h"

// Function to find the maximum value in an array
int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int a[] = {1, 3, 4, 5, 11, 12, 13};
    int b[] = {6, 7, 8, 9, 15, 17, 19};
    int c[] = {4, 1, 9, 6, 13, 19, 11};
    int size = sizeof(a) / sizeof(a[0]);
    int data[size];

    for (int i = 0; i < size; i++)
        {
            data[i] = (a[i] > b[i]) ? a[i] : b[i];
            data[i] = (a[i] > c[i]) ? a[i] : c[i];
            data[i] = (b[i] > c[i]) ? b[i] : c[i];
        }

    int maxVal = findMax(data, size);
    printf("Maximum value: %d\n", maxVal);

    printf("The maximum value of array is:");
    printArray(data,size);

    return 0;
}