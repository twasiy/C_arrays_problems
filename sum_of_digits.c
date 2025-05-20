//This the function fo getting the sum of the digits by the given value pair.
#include<stdio.h>

int sum_digits(int a,int b,int c){
    int sum = 0;
    int value = (a * b) + c;
    while (value > 0)
    {
        int digits = value % 10;
        sum += digits;
        value /= 10;
    }
    return sum;
}

int main()
{
 int data[][3] = {{135, 49, 187},{263, 190, 146},{342, 224, 143},{331, 198, 43},{316, 115, 139},{395, 296, 93},
 {160, 182, 144},{53, 191, 75},{304, 299, 14},{292, 94, 159},{199, 155, 93},{13, 159, 163},{112, 172, 154}};

    int rows = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < rows; i++)
    {
        int a = data[i][0];
        int b = data[i][1];
        int c = data[i][2];
        int result = sum_digits(a, b, c);
        printf(" %d ", result);
    }
    printf("\n");

    return 0;
}