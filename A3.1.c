/*
CH-230-A
a3 pt1
Mustafa Owais
mowais@jacobs-university.de
*/



#include <stdio.h>
#include <stdlib.h>


int main()


{


float x;
int n;
int c = 0;
int c1 = 0;
int d = 1;



printf("Enter a valid float=");
    scanf("%f", &x);

printf("Enter a valid positive integar=");
while(scanf("%i", &n) !=1)
{
    printf("Enter a valid positive integar=");
    while(getchar() !='\n');
}
printf("You entered:%d\n", n);
if (n > 0)
{
 do
 {
    printf("%d Day ", d);
    printf("= %d hours\n", d * 24);
    d++;
 
    }  while (n >= d);
 
} else {
    do
    {  printf("Enter a valid positive integar=");
        scanf("%d", &n);
    }    while (n < c);
    
    do
    {
   printf("%f", x); 
   c1++;
       }  while (c1 <= n);
    
    
}








return 0;
}