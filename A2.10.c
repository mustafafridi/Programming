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


int n;
    int d=1;
    int c=0;


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
       printf("%d Day ", d);
       printf("= %d hours\n", d * 24);
       d++;
    
       }  while (n >= d);
    
    
}
    






return 0;
}
