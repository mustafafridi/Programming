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


int w, d, h, w1, d1;
double total;


/*Reading from keyboard*/
printf("Enter # of weeks=");
    scanf("%d", &w);
printf("Enter # of days=");
    scanf("%d", &d);
printf("Enter # of hours=");
    scanf("%d", &h);

/*Calculation for total # of hours*/

w1 = w * 7 * 24;
d1 = d * 24;


total = w1 + d1 + h;


/*printing total # of hours*/

printf("Total # of hours=%lf\n",total);




return 0;

}


/* test input 
2 weeks = 336
8 days = 192
6 hours = 6

output = 534hrs  */