/// bài 157 - 160
#include <stdio.h>
#include <cmath>
using namespace std;

float timx(float a[], int n){
	float x = a[0];
	for(int i = 1; i < n; i++)
		 x = (x > (fabs)(a[i])) ?  x  :  (fabs)(a[i]);
    return x;
}

void timdoan(float a[], int n){
	float max = a[0];
	float min = a[0];
	for(int i = 0; i < n; i++){
		max = (a[i] > max) ? a[i] : max;
		min = (a[i] < min) ? a[i] : min;
	}
    printf("\n[ %.3f , %.3f ] la doan chua cac gia tri trong mang\n", min, max);
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
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    timdoan(a, n);


}
