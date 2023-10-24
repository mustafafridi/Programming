/*
CH-230-A
a4 pt5
Mustafa Owais
mowais@jacobs-university.de
*/



#include <stdio.h>
#include <math.h>
#include <string.h>
//initialization and setting up pointer
int count_consonants(char *c){
 int consonants;
 consonants=0;
  // for loop to setup number of consonants calculation, value chart where data is saved
 for (int i = 0; i < strlen(c); i++){
        if (*(c +i)=='a' || *(c +i)=='e' || *(c +i)=='i' ||
           *(c +i)=='o' || *(c +i)=='u' || *(c +i)=='A' ||
           *(c +i)=='E' || *(c +i)=='I' || *(c +i)=='O' ||
           *(c +i)=='U'){

           }
        else if((*(c +i)>='a'&& *(c +i)<='z') || (*(c +i)>='A'&& *(c +i)<='Z'))
        {
            consonants=consonants+1;
        }
    }
 return (consonants);   
}

int main(){
    int temp[100];
    char c[100];
    for (int i = 0; i < 100; i++)
    {
        fgets(c,sizeof(c),stdin);     // reading keyboard
        if (strlen(c) == 1){
            break;
        }        
        temp[i] =count_consonants(c);
        printf("Number of consonants=%d\n",temp[i]);   // printing number of consonants
    } 
    return 0;
}