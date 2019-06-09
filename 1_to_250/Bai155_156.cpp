/// bai 155 - 156
#include <stdio.h>
#include <cmath>
using namespace std;

int vtMin(float arr[], int n){
	int min = arr[0];
	int index=0;
	for (int i = 1; i < n; i++){
		if (arr[i] < min){
            index= i;
			min = arr[i];
		}
	}
	return index;
}

int vtMax(float arr[], int n){
	int max = arr[0];
	int index=0;
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
            index= i;
			max = arr[i];
		}
	}
	return index;
}

void XuatKetQuaMin(float arr[], float b[], int n){
	printf("\nGia tri trong mang gần gia tri x nhat la: ");
    printf("%8.3f", arr[vtMin(b, n)]);
}

void XuatKetQuaMax(float arr[], float b[], int n){
	printf("\nGia tri trong mang xa gia tri x nhat la: ");
    printf("%8.3f", arr[vtMax(b, n)]);
}

void taoMang(float arr[], int n, float b[], float x){
     printf("%8.3f", arr[0]);
	for(int i = 0; i < n; i++){
		b[i] = abs((x - arr[i]));
        printf("%8.3f", b[i]);
	}
}

void inPut_F(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", &arr[i]);
    }
}


void outPut_F(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("%.2f\t", arr[i]);
    }
}


main(){
    int n;
    float x;
    int i;
    float max=0, min=9999, minus;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    float arr_F[n];
    float b[n];

    printf("\nNhap mang so thuc\n");
    inPut_F(arr_F, n);

     printf("\nXuat mang so thuc\n");
    outPut_F(arr_F, n);

    printf("\nNhap x: ");
    scanf("%f",&x);

    taoMang(arr_F, n, b, x);
    printf("\nKhoang cach tu %.2f toi cac phan tu trong mang:\n", x);
    outPut_F(b, n);

    XuatKetQuaMax(arr_F, b, n);
    XuatKetQuaMin(arr_F, b, n);
}
