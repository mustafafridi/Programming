#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main ()



{
double x, y ;

printf("Please enter int x:");
scanf("%lf", &x);
printf("Please enter int y:");
scanf("%lf", &y);

double *ptr_1, *ptr_2, *ptr_3;

ptr_1 = &x;
ptr_2 = &x;
ptr_3 = &y;



printf("Pointer 1: %p = \n pointer 2:%p \n", ptr_1, ptr_2);
printf("Pointer 3: %p", ptr_3);





}






















