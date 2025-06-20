//Minimum of two array
#include <stdio.h>

int main()
{
    int a[] = {-6880268, -5377341, 2122376, -1754434, 3441042, -5168679, -96252, 4427167, -2183494, -7861130,
               -4267081, 4504662, 7221471, -3163699, -929895, 481215, -6073132, 8023812, 6790433, -1757894, -9274362,
               -1163804, -9776977, -7969568, 5788963, 1432765, 2558033, -9148359, -4035539, 1940001};

    int b[] = {-9649804, -764770, 397412, -8766905, 6439395, -9963416, 6834898, -4865939, -1330392, 129271,
               -8129621, 508722, 178709, 5277792, -8414451, 7258122, -174942, 8203276, 1996166, -9052186, 402958,
               9658010, 3430729, 8331429, 6605620, -9329248, -6156646, 39066, 5106853, -3452686};

    int size = sizeof(a) / sizeof(a[0]);
    int data[size];

    // Store the smaller value at each index
    for (int i = 0; i < size; i++)
    {
        data[i] = (a[i] < b[i]) ? a[i] : b[i];
    }
    // Print all values in one line, space-separated
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}