#include<stdio.h>
#include <math.h>


double Power_n(float x, float y){
	return (double) pow(x, y);
}

main(){
	float x ;
	float y;

	printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap y: ");
	scanf("%f", &y);

	printf("x^y = %.2f", Power_n(x, y));
}
