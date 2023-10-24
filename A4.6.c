/*
CH-230-A
a4 pt6
Mustafa Owais
mowais@jacobs-university.de
*/



#include <stdio.h>
#include <stdlib.h>
// initialization
//setting up pointer

void greatest(int *list,int n){
    int grt1,grt2,pos;
    grt1= *list;      // call function for greatest value 1
    for (int i=0;i < n; i++){
        if ( (*(list+i)) >= grt1){           // if condition to see if list + i is bigger than greatest value 1
          grt1=*(list+i);      // if so saving greatest value to list + i
          pos = i;
        }
    }
    *(list + pos) = '\0'; 
    grt2=*list;           // call fuction for greatest value 2
    for (int i=0;i < n; i++){
        if ((*(list+i)) >= grt2){       // if condition to see if list + i is bigger than greatest value 2
          grt2 = *(list+i);             // if so saving greatest value 2 to list + i
        }
    }
    printf("The greatest two numbers are %d and %d\n",grt1,grt2);   // printing greatest value of both lists
}

int main(){
    int n;
    printf("Enter the number of elements you want\n");        
    scanf("%d",&n);
    int *list;
    list= (int*) malloc(sizeof(int)* n);       
    if (list == NULL){
    exit(1);}
    for (int i=0;i < n; i++){
        printf("Enter a number ");
        scanf("%d",&(*(list + i)));
    }
    greatest(list,n);
    free(list);
    return 0;
}