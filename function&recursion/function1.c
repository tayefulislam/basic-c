#include <stdio.h>

void printHello(); // declare function prototype
void printGoodBye();

int main()
{
    printHello(); // function call
    printGoodBye();
    return 0;
}

// funtion defination
void printHello()
{
    printf("Hello\n");
};

void printGoodBye()
{
    printf("Good Bye\n");
};