

/*
CH-230-A
a4 pt1
Mustafa Owais
mowais@jacobs-university.de
*/


#include <stdio.h>
#include<math.h>

int main()
{
float i;
float x;
float y;
float z;

   scanf("%f",&x);
   scanf("%f",&y);
   scanf("%f",&z);


   for (i=x ; i<=y ; i=i+z )
{

printf("%f %f %f\n", i , i*i*M_PI , 2*i*M_PI );

}
return 0;
}
