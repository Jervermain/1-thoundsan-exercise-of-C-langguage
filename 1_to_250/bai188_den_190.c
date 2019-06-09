#include <stdio.h>

int KiemTraToanLe(int n){
	int dv;
	while (n != 0)
	{
		dv = n % 10;
		if (dv % 2 == 0)
			return 0;
		n = n / 10;
	}
	return 1;
}

void LietKeSoToanChuSoLe(int a[], int n){
	for(int i = 0; i < n; i++){
		if(KiemTraToanLe(a[i]))
			printf("%4d", a[i]);
	}
}

int TimChuSoDauLe( int n){
    int dv;
   while (n >= 10){
       dv = n % 10;
       n = n / 10;
   }
   if (n % 2 == 0)
       return 0;
   return 1;
}

int LietKeViTriChuSoDauLe(int a[], int n){
	for(int i = 0; i < n; i++){
       if (TimChuSoDauLe(a[i]) == 1)
           printf("%4d", a[i]);
	}
   return 0;
}

int TimChanDau(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}

int TimChanLonNhat(int a[], int n){
	int ChanMax = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] % 2 == 0 && a[i] > ChanMax)
			 ChanMax = a[i];
	}
	return ChanMax;
}

void LietKeViTriChanLonNhat(int a[], int n){
	int ChanMax = TimChanLonNhat(a, n);
	for(int i = 0; i < n; i++){
		if(a[i] == ChanMax)
			printf("%4d", i);
	}
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

    int ViTriChanDau = TimChanDau(a, n);

	if(ViTriChanDau == -1)
		printf("\nMang khong co so chan");
	else{
		printf("\nCac vi tri co gia tri bang gia tri chan lon nhat la");
		LietKeViTriChanLonNhat(a, n);
	}

	printf("\nCac so co chu so dau le la: ");
	LietKeViTriChuSoDauLe(a, n);

	printf("\nCac so toan chu so le la: ");
	LietKeSoToanChuSoLe(a, n);
}
