/*
CH-230-A
a3 pt10
Mustafa Owais
mowais@jacobs-university.de
*/


 
#include <stdio.h>
 
float product(float a, float b){
    // printing sum
    printf("%f\n", a*b);
    return a*b;
    
}
 
void productbyref(float a, float b, float *p){
    float product;
    product = a * b;
    p = &product;\
    //printing product by reference
    printf("%f\n", *p);
}
void modifybyref(float *a, float *b){
    // adding 3 by pointers
    *a = *a + 3;
    printf("%f\n", *a);
    // adding 5 by pointers
    *b = *b + 11;
    printf("%f\n", *b);
}
 
int main() {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    // calling functions
    product(num1, num2);
    float *p=0; // initializing pointer p
    productbyref(num1, num2, p);
    modifybyref(&num1, &num2);
    
    
    return 0;
}
