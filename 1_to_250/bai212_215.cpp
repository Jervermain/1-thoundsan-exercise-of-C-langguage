#include <stdio.h>
#include <cmath>
using namespace std;

double TinhKgCachTBGiuaCacGiaTriTrongMang(float a[], int n){
	float Tong = 0.0;
	int y = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			Tong += abs(a[i] - a[i + 1]);
			y++;
		}
	}
	return (double)pow(Tong, 1.0/y);
}

float TinhTBNhanCacSoDuong(float a[], int n){
	float Tich = 1.0;
	float dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			Tich *= a[i];
			dem++;
		}
	}
	if(dem == 0){
		printf("\nMang khong co so thoa yeu cau");
		return 0;
	}
	return pow(Tich,1.0/dem);
}

float TinhTBCongCacSoLonHonX(float a[], int n, float x){
	float Tong = 0;
	float dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > x){
			Tong += a[i];
			dem++;
		}
	}
	if(dem == 0){
		printf("\nMang khong co so thoa yeu cau");
		return 0;
	}
	return Tong/dem;
}

float TinhTBCongCacSoDuong(float a[], int n){
	float Tong = 0;
	float dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			Tong += a[i];
			dem++;
		}
	}
	if(dem == 0){
		printf("\nMang khong co so duong");
		return 0;
	}
	return Tong/dem;
}

void inPut(float a[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", &a[i]);
    }
}


void outPut(float a[], int n){
     for(int i=0; i<n; i++){
        printf("%.2f\t", a[i]);
    }
}

main(){
    int n;
    float x;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    float a[n];

    printf("\nNhap mang so thuc\n");
    inPut(a, n);\

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    float Bai212 = TinhTBCongCacSoDuong(a, n);
	printf("\nTrung binh cong cac so duong = %.3f", Bai212);

	printf("\nBai 213 - Nhap x: ");
	scanf("%f", &x);
	float Bai213 = TinhTBCongCacSoLonHonX(a, n, x);
	printf("\nTrung binh cong cac so duong > x = %.3f", Bai213);

	float TBN = TinhTBNhanCacSoDuong(a, n);
	printf("\nTrung binh cong cac so duong = %.3f", TBN);

	double KgCach = TinhKgCachTBGiuaCacGiaTriTrongMang(a, n);
	printf("\nKhoang cach TB giua cac gia tri trong mang = %.3f", KgCach);
}
