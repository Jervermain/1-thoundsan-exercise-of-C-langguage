
#include<stdio.h>

main(){
	float x, S, T;
	int i, n;
	S = 0;
	T = 1;
	i = 1;

	printf("\nNhap x: ");
	scanf("%f", &x);

	x = -x;
	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);
	if(n < 1){
		printf("\nDu lieu khong hop le. Xin kiem tra lai !");
	}
	}while(n < 1);

	while(i <= n){
		T = T * x;
		S = S + T;
		i++;
	}
	printf("\nTong = %f", -S);
}
