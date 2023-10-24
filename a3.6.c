/*
CH-230-A
a3 pt6
Mustafa Owais
mowais@jacobs-university.de
*/





#include <stdio.h>
#include <stdlib.h>
//initialization 
float to_pounds(int kg, int g)
{
    float G=(float)g/1000;     

    float t=kg+G;    //setting up formula for calculation
    float c=t*2.2;
    return c;

}
int main()
{
int i;
int k;
float x;
char line [100];
fgets ( line , sizeof ( line ) , stdin ) ;   //scanning and printing
 sscanf ( line , "%d", & i ) ;
 fgets ( line , sizeof ( line ) , stdin ) ;
 sscanf ( line , "%d", & k ) ;
 x=to_pounds(i,k);
 printf("Result of conversion: %f\n",x);
}










