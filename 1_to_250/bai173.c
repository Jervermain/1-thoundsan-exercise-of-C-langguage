/**
173.(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm chữ số xuất
hiện ít nhất trong mảng (timchuso).
**/

#include<stdio.h>

int TimChuSoXuatItNhat(int a[], int b[]){
    int min= abs(a[0] % 10);
    for (int i = 0; i < 10 ; i++){
        if(b[i] != 0 && b[min]>b[i])
            min= i;
    }
    return min;
 }

void DemChuSo(int a[], int n, int b[]){
	for (int i = 0; i < n; i++){
		int themang = abs(a[i]);
		while (themang != 0){
			int ChuSo = themang % 10;
			themang /= 10;
			b[ChuSo]++;
		}
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
    int b[10]={0};  /// Chua so lan xuat hien cua 10 chu so

    printf("\nNhap mang so nguyen\n");
    inPut(a, n);

    printf("\nXuat mang so nguyen\n");
    outPut(a, n);

    DemChuSo(a, n, b);

    printf ("\nChu so xuat hien it nhat la %d",TimChuSoXuatItNhat(a, b));

}
