//Calculating the sum of sequence
#include <stdio.h>

float sum_of_sequence(float a, float d, float n)
{
    float value = (n / 2.0) * (((2 * a) + (n - 1) * d));
    return value;
}

int main()
{
    float data[][3] = {{15, 7, 90},{5, 20, 99},{12, 7, 25},{9, 9, 100},{27, 6, 44},{26, 18, 98},{16, 20, 50},{27, 10, 55}};
    int size = sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < size; i++)
    {
        float a = data[i][0];
        float d = data[i][1];
        float n = data[i][2];
        printf(" %.f \n", sum_of_sequence(a, d, n));
    }

    return 0;
}

// sum of sequence by the alternative way
#include<stdio.h>

float sum_of_sequence(float a, float d, float n)
{
    float value = (n / 2.0) * (((2 * a) + (n - 1) * d));
    return value;
}
int main(){
    int a , d , n;
    printf("Enter a(first value), d(step), n(numbers should be accounted) values:");
    scanf("%d %d %d",&a, &d, &n);

    printf("The sum of the sequence is:%.f\n", sum_of_sequence(a, d, n));

    return 0;
}