/*
CH-230-A
a1 p5[c] 
Mustafa Owais 
mowais@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#define Intermediate
 //initalizaing 
int main(){
    int n;
    int *arr1,*arr2;  // initallizing pointer at arr
    int scalar=0;   
    scanf("%d",&n);
    arr1= (int*) malloc(sizeof(int)* n);   // setting arr
    if (arr1 == NULL)    //condition for incorrect input
    {
        exit(1);
    }
    for (int i=0;i < n; i++) //loop to input data into arr
    {
        scanf("%d",&arr1[i]);
    }
    arr2= (int*) malloc(sizeof(int)* n);
    // calculator  for calculating product values
    if (arr2 == NULL)
    {
        exit(1);
    }
    for (int i=0;i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }             
    #ifdef Intermediate
    printf("values are:\n"); //product values
    #endif
    for (int i = 0; i < n; i++)         
    // scalaer values calculator 
    {                                   
        scalar=scalar+(arr1[i]*arr2[i]);   
        #ifdef Intermediate
        printf("%d\n",arr1[i]*arr2[i]);
        #endif
    }                                   
    printf("Scaler values are: %d\n",scalar);  // scaler product values
 
    free(arr1);  
    free(arr2);   //emptying data stored arrays 
    return 0;
}