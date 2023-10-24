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


char var;
int var1;
var = getchar();
printf("character=%c\n",var);
printf("decimal=%d\n",var);

var1 = var * 1;





/* calculating octal value */


printf("octal=%o\n",var1); 



/* running a loop to make the quotient = 0 so we can get the octal value */


/* calculating hexa value */


    
printf("hexadecimal=%x\n",var1);







return 0;

}