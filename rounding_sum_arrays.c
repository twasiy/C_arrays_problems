//The avarage of some value in the array and then rounding the avarage value
#include <stdio.h>
#include <math.h>

// Round half away from zero
int round_half_away(double num)
{
    if (num > 0)
        return (int)(num + 0.5);
    else
        return (int)(num - 0.5);
}

int main()
{
    // Input data with trailing 0s
    int data[][20] = {
        {1761, 6172, 2024, 3368, 4740, 6798, 0},
        {2955, 4889, 3922, 1404, 5243, 1734, 0},
        {4298, 9457, 8995, 7774, 12669, 14767, 11461, 1053, 14906, 1001, 0},
        {498, 254, 353, 432, 494, 171, 45, 15, 0},
        {1653, 2311, 1426, 3319, 2798, 367, 3903, 3895, 3603, 2507, 386, 1492, 0},
        {1429, 2906, 3267, 2464, 1827, 1125, 1282, 1832, 0},
        {188, 8, 247, 115, 94, 117, 35, 103, 30, 0},
        {226, 168, 45, 21, 162, 102, 112, 212, 0},
        {246, 487, 65, 364, 200, 418, 419, 0},
        {52, 162, 152, 10, 54, 131, 30, 3, 22, 192, 28, 27, 211, 114, 0},
        {515, 17, 775, 645, 583, 845, 670, 935, 717, 312, 0},
        {108, 765, 28, 13, 123, 514, 116, 100, 826, 262, 572, 470, 535, 692, 455, 0},
        {125, 202, 154, 72, 202, 0}};

    int num_rows = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < num_rows; i++)
    {
        int sum = 0;
        int count = 0;

        for (int j = 0; j < 20; j++)
        {
            if (data[i][j] == 0)
                break;
            sum += data[i][j];
            count++;
        }
        if (count > 0)
        {
            double avg = (double)sum / count;
            printf("%d ", round_half_away(avg));
        }
    }

    printf("\n");
    return 0;
}