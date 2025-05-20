#include <stdio.h>

int main()
{
    // sum in array by loop
    int arr[] = {1, 2, 3, 4, 5};             // Array with given values
    int size = sizeof(arr) / sizeof(arr[0]); // Array size
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // Sum each element
    }

    printf("Sum of array elements: %d\n", sum); // Output: 15

    // sum in arrays by loops
    int sum;
    int a[] = {281676, 223104, 653456, 915677, 114862, 427139, 839057, 140662, 886774, 160696, 666333, 632125, 315234, 487389, 530003};
    int b[] = {392071, 496877, 211143, 851513, 341672, 859432, 625040, 651497, 463942, 742466, 573136, 83001, 75845, 658727, 809974};
    int size = sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum = a[i]+b[j];
        }
        printf("%d\n",sum);
    }

    return 0;
}