/*
CH-230-A
a3 pt6
Mustafa Owais
mowais@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
float product(float a, float b)
{
      return(a+b);
}
void productbyref(float a,float b,float *p)
{
    *p=a*b;
}
void modifybyref(float *a,float *b)
{
    *a= *a +3;
    *b= *b +3;
}
int main()
{
    float a,b,fun1,fun2;
    float *p,*pta,*ptb;
    fun2=0.0;
    printf("first val \n");
    scanf("%f",&a);
    printf("second val \n");
    fun1=product(a,b);
    p=&fun2;
    productbyref(a,b,p);
    pta=&a;
    ptb=&b;
    modifybyref(pta,ptb);
    printf("fun 1= %f\n",fun1);
    printf("fun 2= %f\n",fun2);
    printf("changed val  fun 1 is %f and fun 2 is %f \n",*pta,*ptb);
    return 0;

}
