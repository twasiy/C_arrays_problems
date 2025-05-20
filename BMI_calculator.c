//Body mass index calculator
#include <stdio.h>
int main()
{
    float data[][2] = {
        {106, 1.77}, {73, 1.61}, {70, 1.83}, {47, 1.18}, {120, 1.94}, {69, 1.81} ,{70, 1.48}, {47, 1.34}, {96, 2.14}, {77, 1.83}, {55, 1.29}, {54, 1.64}, {88, 1.71}, {60, 1.62}, {60, 1.62}, {82, 2.61}, {111, 2.30}, {113, 2.22}, {78, 1.61}, {105, 1.73}, {94, 2.92}, {114, 1.76}, {107, 1.75}, {113, 2.66}, {97, 1.93}, {110, 2.47}, {115, 1.79}, {64, 1.84}, {113, 2.27}};
    int size = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < size; i++)
    {
        float weight = data[i][0];
        float height = data[i][1];

        float bmi = weight / (height * height);

        if (bmi < 18.5)
        {
            printf("under ");
        }
        else if (bmi >= 18.5 && bmi < 25.0)
        {
            printf("normal ");
        }
        else if (bmi >= 25.0 && bmi < 30.0)
        {
            printf("over ");
        }
        else
        {
            printf("obese ");
        }
    }
    printf("\n");

    return 0;
}