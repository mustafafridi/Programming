/*
CH-230-A
a1 p5[c] 
Mustafa Owais 
mowais@jacobs-university.de
*/





#include <stdio.h>
 
int main() {
    char c;
    int n,i;
    double temp;
    scanf(" %s",&c);
    scanf("%d",&n);
    double Temp_array[n];
    for(i=0; i<n; i++){
        scanf("%lf", &temp);
    //storing in temp arruy
        Temp_array[i] = temp;
    }
    temp = 0.0; // initialising temp 
    switch(c){
        case 's':
            for(i=0; i<n; i++){
                //calc temperature
                temp = temp + Temp_array[i]; 
            }
            printf("%lf", temp);
            break;
        
        case 'p':
            for(i=0; i<n; i++){
        //printing temp
                printf("%lf\n",Temp_array[i]); 
            }
            break;
        
        case 't':
            for(i=0; i<n; i++){
         //printing temperature in F
                printf("%lf\n",((9/5.0)*Temp_array[i])+32);
            }
            break;
        default:
            for(i=0; i<n; i++){
                    temp = temp + Temp_array[i];
            }
            // Average temperature
            printf("%lf\n", temp/n); 
            
                
    }
    
}
