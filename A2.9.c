

/*
CH-230-A
a2 p9
Mustafa Owais 
mowais@jacobs-university.de
*/




#include <stdio.h>
int main(){
//INITIALIZING AND READING KEYBOARD
char a;
scanf("%c",&a);
int a1;
a1=(int) a; // MAKING INPUT INTO AN INT 
//IF LOOP CONDITION FOR ASCII CORRESPONDING VALUES
 if ((a1 >= 65 && a1 <=90) || (a1 >=97 && a1<=122) )

{
     printf("%c is a letter\n",a); //PRITING IF VALUE FALLS WITHIN LETTER RANGE
}
    else if (a1 >= 48 && a1 <=57 ){ // ELSE CONDITION TO SEE IF ITS A DIGIT
     printf("%c is a digit\n",a);
    }
    else
    {
     printf("%c is some other symbol\n",a); // ELSE CONDITION TO SEE IF ITS SOME OTHER SYMBOL
    }
 
    return 0;
}



