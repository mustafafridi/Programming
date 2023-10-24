/*
CH-230-A
a1 p5[c] 
Mustafa Owais 
mowais@jacobs-university.de
*/



#include <stdio.h>
#include <stdlib.h>

int main() 


{


float a, b, h;
float s_a, r_a, t_a, tr_a;

    scanf("%f%f%f", &a, &b, &h);


/* calculating area of square with side 'a' */

s_a = a * a;

/* calculating area of rectangle with side 'a' and 'b' */

r_a = a * b;

/* calculating area of triangle with base 'a' and height 'h' */

t_a = 0.5 * a * h;

/* calculating area of trapezoid with base 'a', 'b' and height 'h' */

tr_a = (a + b)/2 * h;

/* printing answers */

    printf("square area=%f\n",s_a); 
    printf("rectangle area=%f\n",r_a); 
    printf("triangle area=%f\n",t_a); 
    printf("trapezoid area=%f\n",tr_a); 

return 0;

}
