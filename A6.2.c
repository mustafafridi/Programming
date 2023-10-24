/*
CH-230-A
a6 p2
Mustafa Owais 
mowais@jacobs-university.de
*/




#include <stdio.h>
#define LSB(a)                                         \
    {                                                  \
        if (a & 1)                                     \
            printf("The least significant bit is: 1"); \
        else                                           \
            printf("The least significant bit is: 0"); \
    }

    //defining Least sig bit macro
    // condition: bitwise operator

    //initializing main function
int main()
{
    unsigned char n;
    printf("Enter the character\n");
    //scanning input
    scanf("%c", &n);
    printf("The decimal representation is: %d\n", n);
    //refering to macro
    LSB(n);
    return 0;
}