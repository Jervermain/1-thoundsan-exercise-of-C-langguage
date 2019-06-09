/**
Viết chương trình nhập 3 cạnh của một tam giác. Hãy cho biết đó là
tam giác gì?
**/

#include<stdio.h>

void ktTamGiac(int a, int b, int c){
	if(a + b <= c || a + c <= b ||  b + c <= a){
		printf("\nTam giac khong hop le. Xin kiem tra lai !");
	}
	else{
		printf("\nDay la tam giac: ");
	    if((a == b) && (b == c)){
			printf("Deu");
		}
		else{
			if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
				printf("Vuong");
			else if(a == b || a == c || b == c)
			    printf("Can");
			else
				printf("Thuong");
		}
	}
}

main(){
	int a, b, c;
	printf("\nNhap canh a: ");
	scanf("%d", &a);

	printf("\nNhap canh b: ");
	scanf("%d", &b);

	printf("\nNhap canh c: ");
	scanf("%d", &c);

    ktTamGiac(a, b, c);

}
