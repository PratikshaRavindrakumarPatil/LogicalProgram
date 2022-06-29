#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str+1); // Head Recurssion
        printf("%c\t",*str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}