#include <stdio.h>

int TimSoHangChuc5(int n){
	n = abs(n);
	n = n / 10;
	int hangchuc = n % 10;
	if(hangchuc == 5)
		return 1;
	return 0;
}

int TinhTongSoHangChuc5(int a[], int n){
	int Tong = 0;
	for(int i = 0; i < n; i++){
		if(TimSoHangChuc5(a[i]))
			Tong += a[i];
	}
	return Tong;
}

int TimChuSoDauLe(int n){
	int donvi;
	n = abs(n);
	while(n >= 10){
		donvi = n % 10;
		n /= 10;
	}
	if(n % 2 == 0)
		return 0;

	return 1;
}

int TinhTongCacSoChuSoDauLe(int a[], int n){
	int Tong = 0;
	for(int i = 0; i < n; i++){
		if(TimChuSoDauLe(a[i]))
			Tong += a[i];
	}
	return Tong;
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

    int TongDauLe = TinhTongCacSoChuSoDauLe(a, n);
	printf("\nTong cac phan tu co chu so dau la le: %d", TongDauLe);

	int TongChuc5 = TinhTongSoHangChuc5(a, n);
	printf("\nTong cac phan tu co chu so hang chuc la 5: %d", TongChuc5);

}
