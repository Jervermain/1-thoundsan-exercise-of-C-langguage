#include <stdio.h>
#include <math.h>

int KiemTraCapSoCong(int a[], int n, int &d){
	d = a[1] - a[0];
	int flag = 1;
	for(int i = 2; i < n - 1; i++){
		if((a[i + 1] - a[i]) != d){
			flag = 0;
			break;
		}
	}
	return flag;
}

int KiemTraGiamDan(int a[], int n){
	int flag = 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i] < a[i + 1]){
			flag = 0;
			break;
		}
	}
	return flag;
}

int KiemTraTangDan(int a[], int n){
	int flag = 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]){
			flag = 0;
			break;
		}
	}
	return flag;
}

int KiemTraTinhChatLe(int a[], int n){
	int flag = 1;
	for(int i = 0; i < n; i++){
		if((a[i] + a[i + 1] % 2) == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int KiemTraMangDoiXung(int a[], int n){
	int flag = 1;
	for(int i = 0; i < n; i++){
		if(a[i] != a[n - i - 1]){
			flag = 0;
			break;
		}
	}
	return flag;
}

int KiemTraToanChan(int a[], int n){
	int flag = 1;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int KiemTraHoanThien(int n){
	int tong = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			tong += i;
	}
	if(tong == n)
		return 1;
	else
		return 0;
}

int KiemTraMangKhongCoSoHoanThienLonHon256(int a[], int n){
	int flag = 0; // lúc đầu chưa có
	for(int i = 0; i < n; i++){
		if(KiemTraHoanThien(a[i]) == 1 && a[i] < 256){
			flag = 1;
			break;
		}
	}
	return flag;
}

int KiemTraNguyenTo(int n){
	if (n < 2)
		return 0;
	else if (n > 2)
	{
		if (n % 2 == 0)
			return 0;
		for (int i = 3; i <= sqrt((float)n); i += 2){
			if (n % i == 0)
				return 0;
		}
	}
	return 1;

}

int KiemTraMangCoSoNguyenTo(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraNguyenTo(a[i]) == 1)
			flag = 1;
	}
	return flag;
}

int KiemTraCoSoChan(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			flag = 1;
			break;
		}
	}
	return flag;
}

int KiemTraCo2GiaTri0LienTiep(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 0 && a[i + 1] == 0){
			flag = 1;
			break;
		}
	}
	return flag;
}

int KiemTraCoGiaTri0(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 0)
			flag = 1;
	}
	return flag;
}

int KiemTraBiTrung(int a[], int n, int index){
	for (int i = index - 1; i >= 0; i--){
		if (a[i] == a[index])
			return 0;
	}
	return 1;
}

int DemSoLuongSoNguyenToPhanBiet(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		int CheckTrung = KiemTraBiTrung(a, n, i);{
			if (CheckTrung == 1){
				if(KiemTraNguyenTo(a[i]) == 1)
					dem++;
			}
		}
	}
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

	printf("\nSo luong so nguyen to phan biet = %d", DemSoLuongSoNguyenToPhanBiet(a, n));

	int bai240 = KiemTraCoGiaTri0(a, n);
	if(bai240 == 1)
		printf("\nMang co gia tri 0");
	else
        printf("\nMang khong co gia tri 0");

    int bai241 = KiemTraCo2GiaTri0LienTiep(a, n);
	if(bai241 == 1)
		printf("\nMang co 2 gia tri 0 lien tiep");
	else
        printf("\nKhong tim thay 2 so 0 lien tiep");

    int bai242 = KiemTraCoSoChan(a, n);
	if(bai242 == 1)
		printf("\nMang co so chan");
	else
        printf("\nKhong tim thay so chan");

    int bai243 = KiemTraMangCoSoNguyenTo(a, n);
	if(bai243 == 1)
		printf("\nMang co so nguyen to");
	else
        printf("\nKhong tim thay snt");

    int bai244 = KiemTraMangKhongCoSoHoanThienLonHon256(a, n);
	if(bai244 == 1)
		printf("\nMang khong co so hoan thien lon hon 256");
	else
        printf("\nKhong tim thay so hoan thien >256");

    int bai245 = KiemTraToanChan(a, n);
	if(bai245 == 1)
		printf("\nMang toan so chan");
	else
        printf("\nKhong thoa DK so chan");

    int bai246 = KiemTraMangDoiXung(a, n);
	if(bai246 == 1)
		printf("\nMang doi xung");
	else
        printf("\nKhong thoa DK doi xung");

    int bai247 = KiemTraTinhChatLe(a, n);
	if(bai247 == 1)
		printf("\nMang co tinh chat le");
	else
        printf("\nKhong thoa DK le");

    int bai248 = KiemTraTangDan(a, n);
	if(bai248 == 1)
		printf("\nMang tang dan");
	else
        printf("\nKhong thoa DK tang dan");

    int bai249 = KiemTraGiamDan(a, n);
	if(bai249 == 1)
		printf("\nMang giam dan");
	else
        printf("\nKhong thoa DK giam dan");

    int d;
    int flag = KiemTraCapSoCong(a, n, d);
	if(flag == 1)
		printf("\nCac phan tu trong mang lap thanh cap so cong voi cong sai d = %d", d);
	else
        printf("\nKhong thoa DK cap so cong");

}
