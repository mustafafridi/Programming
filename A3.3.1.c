/*
CH-230-A
a3 pt3
Mustafa Owais
mowais@jacobs-university.de
*/






#include <stdio.h>
#include <stdlib.h>

// initialization //

float convert(int cm);
int main()
{
   char line [100];
   int cm;
   float a;

// reading from keyboard
fgets (line , sizeof ( line ), stdin );
sscanf (line , "%d", & cm );
// conversation function setup
a=convert(cm);
//printing ans
printf("Result of conversion: %f\n",a );

return 0;



}

float convert(int cm)

 {
    float a= (float)cm/100000;
    return a;
}
