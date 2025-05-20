//Transform farenhite into celcius.
#include <stdio.h>
int main()
{
    int f[] = {34, 586, 115, 294, 232, 308, 289, 287, 34, 148, 532, 248, 213, 260, 263, 355, 54, 542, 258, 592, 49, 544, 149, 214, 517, 239, 220, 67, 172, 565, 474, 479, 405, 345, 456};
    int size = sizeof(f) / sizeof(f[0]);
    int cel[size];
    for (int i = 0; i < size; i++)
    {
        cel[i] = f[i] - 32;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",cel[i]);
        if (i != size - 1)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}