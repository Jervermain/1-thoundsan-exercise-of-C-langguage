#include <stdio.h>

float TinhTongCacPhanTuDuong(float a[], int n){
	int Tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > 0)
			Tong += a[i];
	}
	return Tong;
}

float TinhTong(float a[], int n){
	float tong = 0;
	for(int i = 0; i < n; i++)
		tong += a[i];
	return tong;
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

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    float a[n];

    printf("\nNhap mang so thuc\n");
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    float tong = TinhTong(a, n);
	printf("\nTong cac phan tu trong mang la: %.3f", tong);

	float tongDuong = TinhTongCacPhanTuDuong(a, n);
	printf("\nTong cac phan tu duong trong mang la: %.3f", tongDuong);
}
