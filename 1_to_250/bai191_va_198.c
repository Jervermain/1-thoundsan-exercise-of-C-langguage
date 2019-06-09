/// bai 191 va 198

#include <stdio.h>

float TimMax(float a[], int n){
	float max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

void LietKeViTriLonNhat(float a[], int n){
	float max = TimMax(a, n);
	for(int i = 0; i < n; i++){
		if(a[i] == max)
			printf("%4d", i);
	}
}

void LietKeCacGiaTriCucDai(float a[], int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1] && a[i - 1] < a[i])
			printf("%8.3f", a[i]);
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

    printf("\nNhap mang so thuc\n");
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    printf("\nCac phan tu cuc dai la: ");
	LietKeCacGiaTriCucDai(a, n);

	printf("\nVi tri ma gia tri tai do lon nhat la: ");
	LietKeViTriLonNhat(a, n);
}
