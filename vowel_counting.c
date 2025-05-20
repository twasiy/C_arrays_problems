//Getting vowel from a str .
#include<stdio.h>

int main(){
    char line[100];
    printf("Enter the line: ");
    fgets(line,sizeof(line),stdin);
    int size = sizeof(line)/sizeof(line[0]);
    int number_of_vowels = 0;

    for (int i = 0; i < size; i++)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            number_of_vowels ++;
        }
    }
    printf("%d\n",number_of_vowels);
    return 0;
}
