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

/* Initializing all integars */
int a, x;
int *ptr_a;

ptr_a = &a;
/* Linking a with ptr_a */
printf("Enter Integar 'a'=");
    scanf("%d", &a);
    printf("%d\n", a);



/* value of ptr_a*/
printf("Value at ptr = %p \n",ptr_a);



/* incrementing a by 5 via pointer */
*ptr_a = *ptr_a +5;
 
/* increment pointer by 5 */
printf("Value at *ptr = %d \n", *ptr_a);

printf("Value at ptr = %p \n",ptr_a);

return 0;

}