#include <stdio.h>

void printSalam();
void printBonjour();

int main()
{
    char ch;
    printf("Please enter f for french and b for bangladesh :");
    scanf("%s", &ch);
    if (ch == 'b')
        printSalam();
    else if (ch == 'f')
        printBonjour();
    else
    {
        printf("Nothing\n");
    }
    return 0;
}

void printSalam()
{
    printf("Asslamaalaikum\n");
};

void printBonjour()
{
    printf("Bonjour\n");
};