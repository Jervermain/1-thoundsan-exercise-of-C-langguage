#include <stdio.h>

float TinhTongCacPhanTuCucTri(float a[], int n){
	float Tong = 0;
	for(int i = 0; i < n; i++){
		if(i == 0 && a[i] != a[i + 1])
			Tong += a[i];
		else if(i == n - 1 && a[i] != a[i - 1])
			Tong += a[i];
		else if((a[i] < a[i + 1] && a[i] < a[i - 1]) || (a[i] > a[i + 1] && a[i] > a[i - 1]))
			Tong += a[i];
	}
	return Tong;
}

float TinhTongCacPhanTuLonHonPhanTuXungQuanh(float a[], int n){
	float Tong = 0;
	for(int i = 0; i < n; i++){
		if(i == 0 && a[i] > a[i + 1])
			Tong += a[i];
		else if(i != 0 && a[i] > a[i + 1] && a[i] > a[i - 1])
			Tong += a[i];
		else if(i == n - 1 && a[i] > a[i - 1])
			Tong += a[i];
	}
	return Tong;
}

float TinhTongCacPhanTuLonHonTriTuyetDoiCuaPhanTuDungLienSauNo(float a[], int n){
	float Tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > abs(a[i + 1]))
			Tong += a[i];
	}
	return Tong;
}

float TongCacPhanTuLonHonPhanTuDungLienTruocNo(float a[], int n){
	float Tong = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > a[i - 1])
			Tong += a[i];
	}
	return Tong;
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
    inPut(a, n);\

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    float bai204 = TongCacPhanTuLonHonPhanTuDungLienTruocNo(a, n);
	printf("\nTong bai 204 la %.3f", bai204);

    float bai205 = TinhTongCacPhanTuLonHonTriTuyetDoiCuaPhanTuDungLienSauNo(a, n);
	printf("\nTong bai 205 la %.3f", bai205);

	float bai206 = TinhTongCacPhanTuLonHonPhanTuXungQuanh(a, n);
	printf("\nTong bai 206 la %.3f", bai206);

	float bai207 = TinhTongCacPhanTuCucTri(a, n);
	printf("\nTong bai 207 la %.3f", bai207);


}
