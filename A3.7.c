/*
CH-230-A
a3 pt6
Mustafa Owais
mowais@jacobs-university.de
*/


#include <stdio.h>


void print_form(int n, int m, char c)
{
    int idx=m;
    int i;

    for ( i= 1; i<=n; i++)

    {

        int j;
        for(j=1;j<=idx; j++)
    {

            printf("%c",c);

        }

        printf("\n");

        if (idx ==(n+m-1)){

            break;

        }

        idx=idx+1;

        }


    }
      int main()

{

     int i;

     int k;

     char z;

     char line [100];

     fgets ( line , sizeof ( line ) , stdin ) ;
     sscanf ( line , "%d", & i ) ;

     fgets ( line , sizeof ( line ) , stdin ) ;
     sscanf ( line , "%d", & k ) ;

     fgets ( line , sizeof ( line ) , stdin ) ;
     sscanf ( line , "%c", & z ) ;


print_form(i,k,z);

}
