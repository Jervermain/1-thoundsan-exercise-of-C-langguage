#include <stdio.h>

#include <cmath>
using namespace std;

int KiemTraNguyenTo(int n){
	if (n < 2)
		return 0;
	else if (n > 2){
		if (n % 2 == 0)
			return 0;
		for (int i = 3; i <= sqrt((float)n); i += 2){
			if (n % i == 0)
				return 0;
		}
	}
	return 1;
}

void LietKeViTriNguyenTo(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraNguyenTo(a[i])){
			flag = 1;
			printf("%4d", i);
		}
	}
	if(flag == 0)
		printf("\nKhong co so nguyen to");
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
       if (TimChuSoDauLe(a[i]))
           printf("%4d", a[i]);
	}
   return 0;
}

void LietKeCacSoAm(int a[], int n){
	printf("\nCac so am trong mang la:\n");
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			printf("\%8d", a[i]);
	}
}

void Bai194(int a[], int n){
	int i, j;
	int khoangCachGanNhat = (abs)(a[0] - a[1]);
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n - 1; j++){
			if((abs)(a[i] - a[j]) < khoangCachGanNhat)
				khoangCachGanNhat = (abs)(a[i] - a[j]);
		}
	}
	printf("\nNhung cap gia tri gan nhau nhat: \n");

	for(i = 0; i < n; i++){
		for(j = i + 1; j < n - 1; j++){
			if((abs)(a[i] - a[j]) == khoangCachGanNhat)
				printf("\<%d, %d> vi tri <a[%d],a[%d]>\n", a[i], a[j], i, j);
		}
	}
}

int KiemTraDang3K(int n){
	int flag=1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;

	while(n > 1){
		int du = n % 3;
		if(du != 0)
			flag = 0;
		n /= 3;
	}
	if(flag == 1)
      return 1;
    else
      return 0;
}

void LietKeCacGiaTriCoDang3K(int a[], int n){
	for(int i = 0; i < n; i++){
		if(KiemTraDang3K(a[i]))
			printf("%4d", a[i]);
	}
}

int TimChuSoDauChan(int n){
	int dv;
   while (n >= 10){
       dv = n % 10;
       n = n / 10;
   }
   if (n % 2 != 0)
       return 0;
   return 1;
}

int LietKeChuSoDauChan(int a[], int n){
	for(int i = 0; i < n; i++){
       if (TimChuSoDauChan(a[i]))
           printf("%4d", a[i]);
	}
   return 0;
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

    printf("\nCac so co chu so dau chan la: ");
	LietKeChuSoDauChan(a, n);

	printf("\nCac gia tri co dang 3^k trong mang la: ");
	LietKeCacGiaTriCoDang3K(a, n);

	Bai194(a, n);

	LietKeCacSoAm(a, n);s

    printf("\nCac so co chu so dau le la: ");
	LietKeViTriChuSoDauLe(a, n);

	printf("\nVi tri cac so nguyen to la: ");
	LietKeViTriNguyenTo(a, n);
}
