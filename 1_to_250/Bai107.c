#include<stdio.h>
#include<math.h>

main(){
    double S;
    float x, n;

	printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap n: ");
	scanf("%f", &n);
	n = 1/ n;
	S = pow(x, n);

	printf("Can bac %.2f cua %.2f la %.2f",1/n, x, S);
}
