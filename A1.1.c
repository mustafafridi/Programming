#include <stdio.h>


 int main() 
{
     /* The result of our calculation */ 
  double result =  (double)(3.00 + 1.00) / 5.00;
 printf("The value of 4/5 is %lf\n", result);
 return 0;
 }

/* 

The problem resided within the intiation of the print sequence 


The decimal points of the answer were being lost because of the type of data being printed not being able to
present the decimal points ahead We initalized the answer as a double to take into account the decimal point

*/

