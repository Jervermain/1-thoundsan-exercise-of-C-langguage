#include <stdio.h>

int KiemTraBiTrung(int a[], int n, int ViTri){
	for (int i = ViTri - 1; i >= 0; i--){
		if (a[i] == a[ViTri])
			return 0;
	}
	return 1;
}


int DemSoLuongPhanTuTrung(int a[], int n, int ViTri){
	int dem = 1;
	for (int i = ViTri + 1; i < n; i++){
		if (a[i] == a[ViTri])
			dem++;
	}
	return dem;
}

void DemTanSuatXuatHien(int a[], int n){
	for (int i = 0; i < n; i++){
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung){
			int dem = DemSoLuongPhanTuTrung(a, n, i);
			printf("\nPhan tu %d xuat hien %d lan", a[i], dem);
		}
	}
}

void LietKeCacGiaTriXuatHienQua1Lan(int a[], int n){
	for (int i = 0; i < n; i++){
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung){
			int dem = DemSoLuongPhanTuTrung(a, n, i);
			if(dem != 1)
				printf("\nCac phan tu xuat hien qua 1 lan la %d", a[i]);
		}
	}
}

void LietKeCacGiaTriXuatHienDung1Lan(int a[], int n){
	for (int i = 0; i < n; i++){
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung){
			int dem = DemSoLuongPhanTuTrung(a, n, i);
			if(dem == 1)
				printf("\nCac phan tu xuat hien dung 1 lan la %d", a[i]);
		}
	}
}

void LietKeTanSuatXuatHien(int a[], int n){
	for(int i = 0; i < n; i++){
		int dem = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == a[j]){
				if(i <= j)
					dem++;
				else
					break;
			}
		}
		if(dem != 0)
			printf("\nGia tri %d co tan suat xuat hien la %d", a[i], dem);
	}
}

int DemSoLuongCacGiaTriPhanBiet(int a[], int n){
	int dem = 0, flag;
	for(int i = 0; i < n; i++){
		flag = 1;
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			dem++;
	}
	return dem;
}


int DemSoPhanTuKeNhauThoaDK(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] * a[i - 1] > 0 && abs(a[i - 1]) < abs(a[i]))
			dem++;
	}
	return dem;
}

int DemSoLuongPhanTuKeNhauMaCa2TraiDau(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] * a[i + 1] < 0)
			dem++;
	}
	if(dem != 0)
		dem++;
	return dem;
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

	printf("\nSo luong phan tu ke nhau ma ca 2 trai dau = %d", DemSoLuongPhanTuKeNhauMaCa2TraiDau(a, n));

	printf("\nSo luong phan tu ke nhau ma so dung sau cung dau so dung truoc va co tri tuyet doi lon hon = %d"
            , DemSoPhanTuKeNhauThoaDK(a, n));

	printf("\nSo luong cac gia tri phan biet trong mang = %d", DemSoLuongCacGiaTriPhanBiet(a, n));

	LietKeTanSuatXuatHien(a, n);

	LietKeCacGiaTriXuatHienDung1Lan(a, n);

	LietKeCacGiaTriXuatHienQua1Lan(a, n);

	DemTanSuatXuatHien(a, n);
}
