#include <stdio.h>

int main() 
{ 
    
double sum;
double product;
double difference;
float division;
int rem = 0;
double x = 2138;
double y = 0;
int counter = y + 1;

 
/* Initializing the values */

printf("The value of x is %lf\n", x);
printf("and the value of y is %lf\n", y);

/* printing the values */
sum = x + y;

printf("The result of the sum is %lf\n", sum);

/* addition of the values and output */

product = x * y;

printf("The result of the product is %lf\n", product);

/* multiplication of the values and output */

difference = x - y;

printf("The result of the difference is %lf\n", difference);

/* difference of the values and output */

division = x / y;

printf("The result of the division is %f\n", division);

/* divison of the values and output */


int a = 17;
int b = 4;
 rem = a % b;

/* I had to re initialize x and y as a and b because I had pre defined them as doubles
and i needed them to be int for the remainder calculation to work */



printf("The result of the remainder is %d", rem);


/* remainder of the values and output */




return 0;

}