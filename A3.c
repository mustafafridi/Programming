#include <stdio.h>
int main() 
{ 
    
double result;
/*The result of the division*/
double a = 50.0;
double b = 135.0;
result = a / b;
printf("The result is %lf\n", result);
return 0;

}
/* The first issue I found was the missing # symbol along with include in the first like 
The second issue I found was int mispelled to nt 
Another issue I found was a missing } symbol
I multiplied a and b with 10 so they are decimals anymore to make things simple
as they are gettig multiplied it would get cancelled
I added %lf to line 10 to print the recurring decimals 
and I changed the initiation of line 5 7 and 8 from int to double
The answer prints out to 0.370370

*/
