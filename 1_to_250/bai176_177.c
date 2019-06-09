/// bai 176 177

#include <stdio.h>

void LietKeTrongDoanXY(float a[], int n, float x, float y){
	for(int i = 0; i < n; i++){
		if(x <= a[i] && a[i] <= y)
			printf("\n%8.3f", a[i]);
	}
}

void LietKeCacSoAm(float a[], int n){
	printf("\nCac so am trong mang la:\n");
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			printf("\%8.3f", a[i]);
	}
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
    float x, y;

    printf("\nNhap mang so thuc\n");
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap y: ");
	scanf("%f", &y);

    LietKeCacSoAm(a, n);
    printf("\nCac so trong mang thuoc [%.3f, %.3f] la: ", x, y);
	LietKeTrongDoanXY(a, n, x, y);

}
