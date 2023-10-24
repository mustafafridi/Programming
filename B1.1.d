#include <stdio.h>

int main() {
	//declare variables
	double d1, d2; // doubles
	int i1, i2, sum_i, prod_i, prod_c_over_i; //integers
	char c1, c2, sum_c, prod_c; //characters
	scanf("%lf%lf", &d1, &d2); //get input
	scanf("%d%d", &i1, &i2);
	getchar(); //ignore newline character
	c1 = getchar();
	getchar();
	c2 = getchar();

	sum_i = i1 + i2;
	prod_i = i1 * i2;
	sum_c = c1 + c2;
	prod_c_over_i = c1 * 1 * c2;
	prod_c = c1 * c2; //perform the calculations
	printf("sum of doubles=%lf\n", d1 + d2);
	printf("difference of doubles=%lf\n", d1 - d2);
	printf("square=%lf\n", d1 * d1);
	printf("sum of integers=%d\n", sum_i);
	printf("product of integers=%d\n", prod_i);
	printf("sum of chars=%d\n", sum_c);
	printf("product of chars=%d\n", prod_c_over_i);
	printf("sum of chars=%c\n", sum_c);
	printf("product of chars=%c\n", prod_c); //printing to the terminal

	return 0;
}