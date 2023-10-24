

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
   char str[50];
   int i = 0;
   gets(str);
 


    while (str[i] != '\0')
    {
        if(i%2!=0)
  {
        printf(" %c\n", str[i]);
       
  } 
      else
      printf("%c\n", str[i]);
      i++;
    
    }
        





    return 0;
} 
  