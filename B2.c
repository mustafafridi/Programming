/*
CH-230-A
a1 p5[c] 
Mustafa Owais 
mowais@jacobs-university.de
*/

#include <string.h>
#include<stdio.h>
int main() 
{
    /*declaring*/
    double d1;
    double d2;
    double sum;
    int sum1, sum2;
    double d;   /*d= difference*/
    double s1; /* s1= square1 */
    int c1, c2, prod_c1;
    int i1, i2;
    char cc1, cc2, sum_c, prod_c;


    /* reading double */

    printf("Enter 2 doubles: ");
    scanf("%lf%lf", &d1, &d2);


/* Sum calculation */
    sum = d1 + d2;
    printf("The sum of two doubles is: %lf", sum);

/* Difference calculation */
    d = d1 - d2;
    printf("The sum of two doubles is: %lf", d);

/* square d1 calculation */
    
    s1 = (d1 * d1);
     
    printf("The square of double 1 is: %lf", s1); 


/* reading integars */

    printf("Enter 2 integars: ");
    scanf("%d%d", &i1, &i2);

/* Integar Sum calculation */
    sum1 = i1 + i2;
    printf("The sum of two integars is: %d\n", sum1);


/* product Sum calculation */
    sum2 = i1 * i2;
    printf("The product of two integars is: %d\n", sum2);




/* reading char and ignoring new line */
    printf("Please enter two chars: %d\n");
	getchar(); 
	c1 = getchar();
	getchar();
	c2 = getchar();

/* Char Integar Sum calculation */
    sum_c = c1 + c2;
    


/* Char product Sum calculation */
    prod_c = c1 * c2;

     
    prod_c1 = c1 * 1 * c2;
/* printing char */

    printf("The product of two characters is(decimal): %d\n", prod_c1);
    printf("The sum of two char is(decimal): %d\n", sum_c);
    printf("The sum of two char is(char): %c\n", sum_c);
    printf("The product of two characters is(char): %c\n", prod_c);


    return 0;



}



/* input values
1.2
3.625()
*/