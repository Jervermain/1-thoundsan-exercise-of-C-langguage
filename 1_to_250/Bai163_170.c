/// Bai 163 - 170

#include<stdio.h>

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

int TimSoLonNhat(int a[], int n){
   int max = a[0];
   for(int i = 1; i < n; i++)
      max = (max > a[i]) ? max : a[i];
   return max;
}

int TimNguyenToNhoNhatLonHonMoiGiaTriTrongMang(int a[], int n){
	int max = TimSoLonNhat(a, n);
	int SoCanTim;
	for(SoCanTim = max + 1;; SoCanTim++)
        if(KiemTraNguyenTo(SoCanTim))
			return SoCanTim;
}

int TimViTriLeDauTien(int a[], int n){
	for (int i = 0; i < n; i++){
		if (a[i] % 2 != 0)
			return i;
	}
	return -1;
}

int TimSoLeNhoNhat(int a[], int n, int ViTriDauTien)
{
	int MinLe = a[ViTriDauTien];

	for (int i = ViTriDauTien + 1; i < n; i++){
		if (a[i] % 2 != 0 && a[i] < MinLe)
			MinLe = a[i];
	}
	return MinLe;
}

int KiemTraDang5K(int n){
	if (n <= 1)
      return 1;
	while(n > 1){
        if(n % 5 != 0)
            return 0;
        n /= 5;
    }
    return 1;
}

int TimGiaTri5kLonNhat(int a[], int n){
	int max;
	int dem = 0;
	for(int i = 0; i < n; i++)
       if (KiemTraDang5K(a[i])){
           max = a[i];
           dem ++;
           break;
       }
   if (dem == 0)
       return 0;
   for(int i = 0; i < n; i++)
       if (KiemTraDang5K(a[i]) == 1)
          max = (max > a[i]) ? max : a[i] ;
   return max;
}

int KiemTraToanLe(int n){
	int dv;
	while (n != 0){
		dv = n % 10;
		if (dv % 2 == 0)
			return 0;
		n = n / 10;
	}
	return 1;
}

int TimSoToanChuSoLeMax(int a[], int n){
	int max;
	int dem = 0;

	for(int i = 0; i < n; i++)
		if(KiemTraToanLe(a[i])){
			max = a[i];
			dem++;
			break;
		}

	if(dem == 0)
		return 0;

	for(int i = 0; i < n; i++)
		if (KiemTraToanLe(a[i]))
			max = ( max > a[i]) ? max : a[i] ;

	return max;
}

int KiemTraDang2K(int n){
	if (n <= 1)
      return 1;
	while(n > 1){
        if(n % 2 != 0)
            return 0;
        n /= 2;
    }
    return 1;
}

int TimGiaTri2KDauTien(int a[], int n){
	for(int i = 0; i < n; i++){
		if(KiemTraDang2K(a[i]))
			return a[i];
	}
	return 0;
}

int TimChuSoDauLe(int a[], int n){
	for(int i = 0; i < n; i++)
       if (ChuSoDau(a[i]))
           return a[i];
   return 0;
}

int ChuSoDau( int n){
   int dv;
   while (n >= 10){
       dv = n % 10;
       n = n / 10;
   }
   if (n % 2 == 0)
       return 0;
   return 1;
}


int TimSoGanhDauTien(int a[], int n){
	for (int i = 0; i < n; i++){
		if (SoGanh(a[i]) == 1)
			return a[i];
	}
	return -1;
}

int SoGanh(int x){
	int SoDao = 0;
	int themang = x;
	while (themang != 0){
		SoDao = SoDao * 10 + themang % 10;
		themang /= 10;
	}
	if(x == SoDao)
		return 1;
	else
		return 0;
}

int TimChinhPhuongDauTien(int a[], int n){
	for(int i = 0; i < n; i++){
		if(KiemTraChinhPhuong(a[i]) == 1)
			return a[i];
	}
	return -1;
}

int KiemTraChinhPhuong(int n){
	if(sqrt((float)n) == (int)sqrt((float)n))
		return 1;
	else
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

    printf("\nNhap mang so thuc\n");
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    int cpdt = TimChinhPhuongDauTien(a, n);
	printf("\nSo chinh phuong dau tien la: %d", cpdt);

    int GanhDau = TimSoGanhDauTien(a, n);
	printf("\nSo ganh dau tien la: %d", GanhDau);

    int LeDau = TimChuSoDauLe(a, n);
	printf("\nSo le dau:  %d", LeDau);

	int GT2KDau = TimGiaTri2KDauTien(a, n);
	printf("\nGia tri 2k dau tien la %d", GT2KDau);

	int ToanLeMAX = TimSoToanChuSoLeMax(a, n);
	printf("\nSo toan le max: %d", ToanLeMAX);

	int GT5KMax = TimGiaTri5kLonNhat(a, n);
	printf("\nGia tri 5k lon nhat la %d", GT5KMax);

    int ViTriLeDauTien = TimViTriLeDauTien(a, n);
	if (ViTriLeDauTien == -1)
		printf("\nMang khong ton tai so le");
	else{
		int MinLe = TimSoLeNhoNhat(a, n, ViTriLeDauTien);
		int SoChanThoa = MinLe - 1;
		printf("\nSo chan lon nhat nho hon toan bo gia tri le trong mang la %d", SoChanThoa);
	}

	int sntLon = TimNguyenToNhoNhatLonHonMoiGiaTriTrongMang(a, n);
	printf("\nSNT lon hon moi gia tri trong mang:  %d", sntLon);

}
