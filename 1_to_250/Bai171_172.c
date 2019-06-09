/// Bai 171, 172
#include <stdio.h>

int TimSoLonNhat(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}


int TimBoiChungNhoNhat(int a[], int n){
	int BoiSo = TimSoLonNhat(a, n);
	for(int i = 0; i < n; i++){
		if(BoiSo % a[i] != 0){
			BoiSo += TimSoLonNhat(a, n);
			i = -1;
		}
	}
	return BoiSo;
}

int TimSoNhoNhat(int a[], int n){
	int min = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] < min)
			min = a[i];
	}
	return min;
}

int KiemTraUocSoChung(int a[], int n, int UocSo){
	for(int i = 0; i < n; i++){
		if(a[i] % UocSo != 0)
			return 0;
	}
	return 1;
}

int TimUocSoLonNhatCuaMang(int a[], int n){
	for(int UocSo = TimSoNhoNhat(a, n); UocSo >= 1; UocSo--)  {
		if(KiemTraUocSoChung(a, n, UocSo))
			return UocSo;
	}
	return 1;
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

    int ucln = TimUocSoLonNhatCuaMang(a, n);
	printf("\nUoc So chung lon nhat cua mang la %d", ucln);

	int bcnn = TimBoiChungNhoNhat(a, n);
	printf("\nBoi chung nho nhat cua mang la %d", bcnn);

}
