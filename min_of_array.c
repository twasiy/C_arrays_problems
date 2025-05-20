//Minimum value of an array.
#include <stdio.h>

// Function to print array in {1,2,3} format
void printArray(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(",");
        }
    }
    printf("}\n");
}

int main()
{
    int a[] = {1, 3, 4, 5, 11, 12 ,13};
    int b[] = {6, 7, 8, 9, 15, 17, 19};
    int c[] = {4, 1, 9, 6, 13, 19, 11};
    int size = sizeof(a) / sizeof(a[0]);
    int data[size];

    for (int i = 0; i < size; i++)
    {
        data[i] = (a[i] < b[i]) ? a[i] : b[i];
        data[i] = (a[i] < c[i]) ? a[i] : c[i];
    }

    printf("Result array with lower values:");
    printArray(data,size);
}