/*
CH-230-A
a1 p5[c] 
Mustafa Owais 
mowais@jacobs-university.de
*/





#include <stdio.h>

 
int main() 
{ 
    

int x = 2138;
float y = (-52.358925);   
int count = 0;

 

do { 
	
    printf("x=  %d\n", +x); 
    ++count;
    
 
} while (count <= 0); 

int count1 = 0;


do { 
	
    printf("y=  %.5f\n", y); 
    ++count1;
    
 
} while (count1 <= 0); 
 


char z[5] = {'G'};

printf("z=%s\n", z); 


double u = 61.2953497;

printf("u =%.7f\n", u); 


}



/* Originally I thought we were supposed to print the results 9 times or 7 times 
henceforth the repeat until loops 
they are operational as well we only need to change the counter limit to make the loop work
*/