

/*
CH-230-A
a4 pt1
Mustafa Owais
mowais@jacobs-university.de
*/


#include <stdio.h>
#include<math.h>
// initialization 
float gm(float list[],float num){        
    float prod=1.0,result;
    for (int i = 0; i < num; i++)     
    {
        prod= prod * list[i];
    }
    result = powf(prod,(1/num));
    return result;
}
float highest(float list[],float num){
    float temp;
    temp = list[0];
    for (int i = 0; i < num; i++)
   {
       if (temp < list[i]){
           temp=list[i];
       }
    }
    return temp;
}
float lowest(float list[],float num){
    float temp;
    temp = list[0];
    for (int i = 0; i < num; i++)
    {
       if (temp > list[i]){
           temp=list[i];
       }
    }
    return temp;
}
float add(float list[],float num){
    float sum;
    sum=0;
    for (int i = 0; i < (num); i++)
    {
        sum= sum + list[i];
    }
    return sum;
}




int main(){
    float list[16],temp,gmean,high,low,sum;
    int n;
    char c;
    for (int i = 0; i < 15; i++)
    {
        printf("Enter a float number ");
        scanf("%f",&temp);
    if (temp < 0)
        {
            n=i;
            break;
        }
    list[i]= temp; 
    n=15;   
    }
    getchar();
    printf("Choose an option");
    scanf("%c",&c);
    getchar();
    switch (c)
    {
        // m switch
    case 'm':
        gmean= gm(list,n);
        printf("The geometric mean is %f \n", gmean);
        break;
        // h switch
    case 'h' :
        high= highest(list,n);
         printf("The highest number is %f \n", high);
         break;
        // l switch
    case 'l' :
        low= lowest(list,n);
        printf("The lowest number is %f \n", low);
        
        // s switch
    case 's':
        sum= add(list,n);
        printf("The sum of  number is %f \n", sum);
        break;
    default:
        break;
    }
    return 0;
}