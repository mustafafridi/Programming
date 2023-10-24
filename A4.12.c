/*
CH-230-A
a4 pt12
Mustafa Owais
mowais@jacobs-university.de
*/

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function
void replaceAll(char *str,char c,char e){    // setting up function to replace char c with char e 
    char temp[80];    //string with 80 chars limit
    strcpy(temp,str);   // copy to pointed string
    for (int i = 0; i < strlen(str); i++)     // for loop to recognize char c and char e
    {
        if ( *(str + i) == c)   // conditions to recognize
        {
            *(str + i)= e;
        }
    }
    // printing
    printf("The character to be replaced is %c\n",c);     
    printf("The replacing character is %c\n",e);
    printf("The orignal word is %s",temp);
    printf("The replaced word is %s",str);
}
// main code
 int main()
 {
    char str[80],c,e;    //initialization
    while(1)
        {
        fgets(str,sizeof(str),stdin);   //reading from keyboard
        if (strcmp(str,"stop\n") == 0)     //stop at '/0'
            {
            break;
            }
        printf("Enter the character to be replaced ");    
        scanf("%c",&c);
        getchar();
        printf("Enter the replacing character ");
        scanf("%c",&e);
        getchar();
        replaceAll(str,c,e);    // use of replace all function 
        }   
        return 0;
}