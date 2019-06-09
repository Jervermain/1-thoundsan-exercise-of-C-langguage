// 186 187
#include <stdio.h>

float timduongdautien(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}

float timgiatriduongnhonhat(float a[], int n){
	float duongnhonhat = timduongdautien(a, n);
	for(int i = 0; i < n; i++){
		if(a[i] > 0 && a[i] < duongnhonhat)
			duongnhonhat = a[i];
	}
	return duongnhonhat;
}

void LietKeViTriBgGiaTriDuongMin(float a[], int n){
	float DuongMin = timgiatriduongnhonhat(a, n);
	for(int i = 0; i < n; i++){
		if(a[i] == DuongMin)
			printf("%4d", i);
	}
}

float TimAmDau(float a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			return a[i];
	}
	return -1;
}

void LietKeViTriBangGiaTriAmDau(float a[], int n){
	float AmDau = TimAmDau(a, n);
	for(int i = 0; i < n; i++){
		if(a[i] == AmDau)
			printf("%4d", i);
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

    printf("\nVi tri ma gia tri tai do bang gia tri am dau: ");
	LietKeViTriBangGiaTriAmDau(a, n);

	int vitriduongdau = timduongdautien(a, n);
	if(vitriduongdau == -1)
		printf("\nMang khong co so duong");
	else{
        printf("\nVi tri ma gia tri tai do bang gia tri duong nho nhat: ");
        LietKeViTriBgGiaTriDuongMin(a, n);
	}

}
