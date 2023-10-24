/*
CH-230-A
a3 pt2
Mustafa Owais
mowais@jacobs-university.de
*/





#include <stdio.h>
#include <stdlib.h>

int main() 
{

char line[100];
char ch;
int n;
int i=0;

// intitalization //


fgets (line ,sizeof ( line ), stdin );
sscanf (line , "%c", &ch );

// reading keyboard //

fgets (line , sizeof ( line ), stdin) ;
sscanf (line , "%d", &n) ;


//condition//

while (n >=0)
{

n--;
printf("%c",ch-i);
i++;

}



return 0;
}
