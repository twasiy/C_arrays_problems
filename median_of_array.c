// Finding Median from an array with sorting in accending.
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b, c;
    int data[][3] = {
{39 ,114, 111}, {53, 30 ,28 },{44, 699, 48} ,{62 ,55, 42} ,{695, 684, 699} ,{92 ,135 ,42}, {73 ,64 ,4}, {85, 165 ,171}, {517 ,6, 61} ,{1549,664 ,625} ,{442, 499 ,444} ,
{13 ,130 ,49} ,{8 ,18 ,554} ,{55 ,56 ,51} ,{183 ,740 ,737} ,{98 ,2 ,120},{685, 653, 744} ,{61 ,118 ,103} ,{612, 618 ,609},{446, 1189 ,1195} ,{829 ,823 ,787} ,{62 ,513 ,509 ,},
{17, 8 ,688} ,{2 ,106 ,141} ,{74 ,108 ,9} ,{45 ,35 ,29} ,{436 ,418 ,427} ,{915, 1781, 909} ,{704 ,1107 ,705}};
    int size = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < size; i++)
    {
        a = data[i][0];
        b = data[i][1];
        c = data[i][2];
        // sort a, b, c
        if (a > b)
            swap(&a, &b);
        if (a > c)
            swap(&a, &c);
        if (b > c)
            swap(&b, &c);

        printf(" %d ",b);
    }
    printf("\n");

    return 0;
}