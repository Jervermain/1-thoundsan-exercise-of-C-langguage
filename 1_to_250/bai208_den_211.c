#include <stdio.h>

int KiemTraNguyenTo(int n){
	if (n < 2)
		return 0;
	else if (n > 2){
		if (n % 2 == 0)
			return 0;
		for (int i = 3; i <= sqrt((float)n); i += 2)
			if (n % i == 0)
				return 0;
	}
	return 1;
}

float TinhTBCongNguyenTo(int a[], int n){
	int Tong = 0;
	float dem = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraNguyenTo(a[i])){
			Tong += a[i];
			dem++;
		}
	}
	if(dem == 0){
		printf("\nMang khong co so nguyen to");
		return 0;
	}
	return Tong/dem;
}

int KiemTraChuSoDauChan(int n){
	while(n >= 10)
		n /= 10;
	if(n % 2 == 0)
		return 1;
	return 0;
}

int TinhTongCacSoChuSoDauChan(int a[], int n){
	int Tong = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraChuSoDauChan(a[i]))
			Tong += a[i];
	}
	return Tong;
}

int KiemTraDoiXung(int n){
	int donvi, tam = n;
	int sodaonguoc = 0;
	while(tam != 0){
		donvi = tam % 10;
		sodaonguoc = sodaonguoc * 10 + donvi;
		tam /= 10;
	}
	if(sodaonguoc == n)
		return 1;
	return 0;
}

int TongCacSoDoiXung(int a[], int n){
	int Tong = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraDoiXung(a[i]))
			Tong += a[i];
	}
	return Tong;
}

int KiemTraChinhPhuong(int n){
	return sqrt((float)n) == (int)sqrt((float)n);
}

int TinhTongCacSoChinhPhuong(int a[], int n){
	int Tong = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraChinhPhuong(a[i]))
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

    int bai208 = TinhTongCacSoChinhPhuong(a, n);
	printf("\nTong cac so chinh phuong bang %d", bai208);

	int bai209 = TongCacSoDoiXung(a, n);
	printf("\nTong cac so doi xung = %d", bai209);

	int bai210 = TinhTongCacSoChuSoDauChan(a, n);
	printf("\nTong cac so co chu so dau chan = %d", bai210);

	float bai211 = TinhTBCongNguyenTo(a, n);
	printf("\nTrung binh cong cac so nguyen to = %.3f", bai211);
}
