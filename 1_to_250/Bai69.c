#include<stdio.h>
#include<math.h>
main(){
	int i, n;
	float x, T, S;
	i = 0;
	T = 1;
	S = 0;
	printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap n: ");
	scanf("%d", &n);

	while(i <= n){
		T = pow(x, (2 * i + 1 )) * pow(-1, (float)i);
		S = S + T;
		i++;
	}
	printf("\nTong la %f", S);
}
