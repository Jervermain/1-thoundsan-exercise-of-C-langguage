#include <stdio.h>

int TimTanSuatXuatHienMax(int a[], int n){
	int Max = 1;
	for (int i = 0; i < n; i++){
		int dem = 1;
		for (int j = i + 1; j < n; j++){
			if (a[i] == a[j])
				dem++;
		}
		if (dem > Max)
			Max = dem;
	}
	return Max;
}

int KiemTraBiTrung(int a[], int n, int index){
	for (int i = index - 1; i >= 0; i--){
		if (a[i] == a[index])
			return 0;
	}
	return 1;
}

int DemTanSuatXuatHien(int a[], int n, int index){
	int dem = 1; // Tính luôn chính nó
	for (int i = index + 1; i < n; i++){
		if (a[i] == a[index])
			dem++;
	}
	return dem;
}

void LietKeCacSoXuatHienNhieuNhat(int a[], int n)
{
	int TanSuatMax = TimTanSuatXuatHienMax(a, n);
	for (int i = 0; i < n; i++)
	{
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung == 1)  // chỉ xử lý khi không trùng
		{
			int TanSuat = DemTanSuatXuatHien(a, n, i);
			//printf("\nPhan tu %d xuat hien %d lan", a[i], TanSuat);

			if (TanSuat == TanSuatMax)
			{
				printf("\nPhan tu xuat hien nhieu nhat la %d", a[i]);
			}
		}
	}
	printf("\n=> So lan xuat hien la: %d", TanSuatMax);
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

    LietKeCacSoXuatHienNhieuNhat(a, n);
}
