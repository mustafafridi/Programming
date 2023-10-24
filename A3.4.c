/*
CH-230-A
a3 pt4
Mustafa Owais
mowais@jacobs-university.de
*/








#include <stdio.h>
int position(char str[], char c)
{
int idx;
/* Loop until end of string */
for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){        /*return was inside the loop */

}
/* do nothing */
return idx;
}
int main() {
char line[80];


printf("Enter string:\n");              /* unessesary while loop */

fgets(line, sizeof(line), stdin);

printf("The first occurrence of ígí is: %d\n", position(line, 'g'));

}
