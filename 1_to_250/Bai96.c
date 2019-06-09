#include<stdio.h>

float Tinh(float x){
	float kq;
	if(x >= 5)
		kq = 2 * x * x + 5 * x + 9;
	else
		kq = -2 * x * x + 4 * x - 9;
	return kq;
}
main(){
	float x;
	printf("\nNhap x: ");
	scanf("%f", &x);
	float ketqua = Tinh(x);
	printf("\nKet qua = %f", ketqua);
}
