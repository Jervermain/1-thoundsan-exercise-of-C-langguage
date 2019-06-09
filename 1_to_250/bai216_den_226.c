#include <stdio.h>

int DemSoLuongPhanTuKeNhauMaCa2DeuChan(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0 && a[i + 1] % 2 == 0)
			dem++;
	}
	if(dem != 0)
		dem++;
	return dem;
}

int DemSoLuongGiaTriLonNhat(int a[], int n){
	int dem = 0;
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(max == a[i])
			dem++;
		else if(a[i] > max){
			max = a[i];
			dem = 1;
		}
	}
	return dem;
}

int KiemTraHoanThien(int n){
	int tong = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			tong += i;
	}
	if(tong == n)
		return 1;
	return 0;
}

int DemSoLuongSoHoanThien(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraHoanThien(a[i]))
			dem++;
	}
	return dem;
}

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

int DemSoNguyenTo(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(KiemTraNguyenTo(a[i]))
			dem++;
	}
	return dem;
}

int DemPhanTuLonHonHayNhoHonPhanTuXungQuanh(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(i == 0 && a[i] != a[i + 1])
			dem++;
		else if(i == n - 1 && a[i - 1] != a[i])
			dem++;
		else if((a[i - 1] > a[i] && a[i] < a[i + 1]) || (a[i - 1] < a[i] && a[i] > a[i + 1]))
			dem++;
	}
	return dem;
}

int SoSanhChanLe(int a[], int n){
	int demchan = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
			demchan++;
	}
	if(demchan > n - demchan)
		return -1;
	else if(n - demchan == demchan)
		return 0;
	return 1;
}

int DemSoLuotGiaTriTanCungLa5(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 10 == 5)
			dem++;
	}
	return dem;
}

int DemSoLanXuatHienCuaX(int a[], int n, int x){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			dem++;
	}
	return dem;
}


int KiemTraDoiXung(int n){
	int dv = 0;
	int daonguoc = 0;
	int tam = n;
	while(tam > 0){
		dv = tam % 10;
		tam /= 10;
		daonguoc = daonguoc * 10 + dv;
	}
	if(daonguoc == n)
		return 1;
	return 0;
}

int DemSoDoiXung(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			break;
		if(KiemTraDoiXung(a[i]) == 1)
			dem++;
	}
	return dem;
}


int DemSoDuongChiaHetCho7(int a[], int n){
	 int dem = 0;
	 for(int i = 0; i < n; i++){
		 if(a[i] > 0 && a[i] % 7 == 0)
			 dem++;
	 }
	 return dem;
}

int DemSoChan(int a[], int n){
	 int dem = 0;
	 for(int i = 0; i < n; i++){
		 if(a[i] % 2 == 0)
			 dem++;
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

	printf("\nSo luong so chan la %d", DemSoChan(a, n));

	printf("\nSo luong so duong chia het cho 7 la %d", DemSoDuongChiaHetCho7(a, n));

	printf("\nSo luong so doi xung la %d", DemSoDoiXung(a, n));

	int x;
	printf("\nBai 219 - Nhap x: ");
	scanf("%d", &x);

	printf("\nSo lan xuat hien cua x la %d", DemSoLanXuatHienCuaX(a, n, x));

	printf("\nSo luong gia tri tan cung bang 5 la %d", DemSoLuotGiaTriTanCungLa5(a, n));

	printf("\nSo sanh so luong so chan va so le: %d", SoSanhChanLe(a, n));

	printf("\nSo luong phan tu lon hon hoac nho hon phan tu xung quanh: %d", DemPhanTuLonHonHayNhoHonPhanTuXungQuanh(a, n));

	printf("\nSo luong so nguyen to = %d", DemSoNguyenTo(a, n));

	printf("\nSo luong so hoan thien = %d", DemSoLuongSoHoanThien(a, n));

	printf("\nSo luong gia tri lon nhat = %d", DemSoLuongGiaTriLonNhat(a, n));

	printf("\nSo luong phan tu ke nhau ma ca 2 deu chan = %d", DemSoLuongPhanTuKeNhauMaCa2DeuChan(a, n));

}
