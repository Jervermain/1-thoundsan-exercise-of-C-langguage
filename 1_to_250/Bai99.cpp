/**
Viết chương trình nhập vào 3 số thực. Hãy in 3 số thực ấy ra màn hình
theo thứ tự tăng dần mà chỉ dùng tối đa hai biến phụ.

7 3 6
**/

#include<stdio.h>

void hoanDoi(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

main(){
	int a, b, c;
	printf("\nNhap a: ");
	scanf("%d", &a);

	printf("\nNhap b: ");
	scanf("%d", &b);

	printf("\nNhap c: ");
	scanf("%d", &c);

	if(a > b)
        hoanDoi(a, b);
	if(a > c)
		hoanDoi(a, c);
	if(b > c)
		hoanDoi(b, c);

	printf("\nTang dan: %d %d %d ",a, b, c);
}
