/*
CH-230-A
a3 pt6
Mustafa Owais
mowais@jacobs-university.de
*/



#include<stdio.h>

float avg(float sum,int i){

    int aveg=0;

    aveg=sum/i;

    return aveg;

}

float add(float val[],int i){

    int sum =0;
    int j;
    for (j=0;j<=i;j++)

    {
        sum=sum+val[j];

    }

    return sum;
}

int main()

{

float n,val[11],sum,avr;
int i =0;

n=0.0;

while(i<=9){

    printf("Enter a number=");

    scanf("%f",&n);

    if(n==-99.0){

        break;
    }

    val[i]=n;

    i++;

}

sum=add(val,i);

avr=avg(sum,i);

printf("sum is %f\n",sum);

printf("average is %f\n",avr);


return 0;
}
