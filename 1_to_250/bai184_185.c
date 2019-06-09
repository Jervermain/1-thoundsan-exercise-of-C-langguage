
#include<stdio.h>

int KiemTraChinhPhuong(int n){
	return (sqrt((float)n) == (int)sqrt((float)n));
}
void LietKeViTriChinhPhuong(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraChinhPhuong(a[i])){
			flag = 1;
			printf("%4d", i);
		}
	}
	if(flag == 0)
		printf("\nKhong co so chinh phuong");
}

int KiemTraNguyenTo(int n){
	if (n < 2)
		return 0;
	else if (n > 2){
		if (n % 2 == 0)
			return 0;
		for (int i = 3; i <= sqrt((float)n); i += 2){
			if (n % i == 0)
				return 0;
		}
	}
	return 1;
}

void LietKeViTriNguyenTo(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraNguyenTo(a[i])){
			flag = 1;
			printf("%4d", i);
		}
	}
	if(flag == 0)
		printf("\nKhong co so nguyen to");
}

void inPut(int a[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
}


void outPut(int a[], int n){
     for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}

main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    int a[n];

    printf("\nNhap mang so nguyen\n");
    inPut(a, n);

    printf("\nXuat mang so nguyen\n");
    outPut(a, n);

    printf("\nVi tri cac so nguyen to la: ");
	LietKeViTriNguyenTo(a, n);

	printf("\nVi tri cac so chinh phuong la: ");
	LietKeViTriChinhPhuong(a, n);
}
