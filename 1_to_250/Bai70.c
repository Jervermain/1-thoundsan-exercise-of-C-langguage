#include<stdio.h>
#include<math.h>
main()
{
	int i, n;
	float S, P;
	S = 0;
	P = 0;
	i = 1;
	do{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1){
			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
		}
	}while(n < 1);

	while(i <= n){
		P = P + i;
		S = S + 1 * pow(-1, (float)(1 + i))/ P;
		i++;
	}
	printf("\nTong la %f", S);
}
