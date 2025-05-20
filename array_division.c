// Rounding the value of an array after the division
#include<stdio.h>
#include<math.h>

int main(){
    double data[][2] = {
        {0, -68360},
        {-627689324, -55257},
        {1943223290, -262580},
        {0, 52237},
        {-732271792, -43132},
        {873228634, 74489},
        {387176481, 21246},
        {818762972, -133208},
        {-1609807836, 125272},
        {-2085369480, -242640},
        {2057848065, 1325506}
    };

    int size = sizeof(data)/sizeof(data[0]);

    for (int i = 0; i < size; i++)
        {
        double a = data[i][0];
        double b = data[i][1];

        double value = a / b;
        printf("%.0f ",round(value));
    }
    printf("\n");

    return 0;
}