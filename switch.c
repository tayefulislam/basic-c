#include <stdio.h>

int main()
{
    int day;

    printf("Plase enter a day number(1-7):");
    scanf("%d", &day);
    switch (day)
    {

    case 1:
        printf("Sonibar\n");
        break;

    case 2:
        printf("Robibar\n");
        break;

    case 3:
        printf("Sombar\n");
        break;
    case 4:
        printf("Mongal bar\n");
        break;
    case 5:
        printf("Bodhbar\n");
        break;

    case 6:
        printf("Brishospotibar\n");
        break;
    case 7:
        printf("Friday\n");
        break;

    default:
        printf("Plase enter a valid number\n");
    }

    return 0;
}