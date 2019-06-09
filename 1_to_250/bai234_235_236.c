#include <stdio.h>

int DemSoLanXuatHienCuaMangATrongMangB(int a[], int b[], int na, int nb){
	int i, j, Start, flag, dem = 0;

	for(i = 0; i < nb; i++){
		if(a[0] == b[i] && nb - i >= na){
			Start = i;
			flag = 1;
			for(j = 0; j < na; j++){
				if(a[j] != b[Start++]){
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				dem++;
		}
	}
	return dem;
}

void LietKePhanTuXuatHien1Trong2Mang(int a[], int b[], int na, int nb){
	int i, j, flag;
	for(i = 0; i < na; i++){
		for(j = 0; j < nb; j++){
			if(a[i] == b[j]){
				printf("\nTrong mang A co phan tu [%d] = %d nam trong mang B\n", i, a[i]);
				break;
			}
		}
	}

	for(i = 0; i < nb; i++){
		for(j = 0; j < na; j++){
			if(b[i] == a[j]){
				printf("\nTrong mang B co phan tu [%d] = %d nam trong mang A\n", i, b[i]);
				break;
			}
		}
	}
}

int DemPhanTuChiXuatHien1Trong2Mang(int a[], int b[], int na, int nb){
	int flag, dem = 0;

	for(int i = 0; i < na; i++){
		flag = 1;
		for(int j = 0; j < nb; j++){
			if(a[i] == b[j]){
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			dem++;
	}

	for(int i = 0; i < nb; i++){
		flag = 1;
		for(int j = 0; j < na; j++){
			if(b[j] == a[i]){
				flag = 0;
				break;
			}
		}
		if(flag == 1)
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
    int na, nb;

    do{
        printf("Nhap so phan tu mang a: ");
        scanf("%d", &na);
    }while(na<1);

    int a[na];

    printf("\nNhap mang a\n");
    inPut(a, na);

    do{
        printf("Nhap so phan tu mang b: ");
        scanf("%d", &nb);
    }while(nb<1);

    int b[nb];

    printf("\nNhap mang b\n");
    inPut(b, nb);

    printf("\nXuat mang a\n");
    outPut(a, na);

    printf("\nXuat mang b\n");
    outPut(b, nb);

	printf("\nSo phan tu chi xuat hien 1 trong 2 mang la: %d", DemPhanTuChiXuatHien1Trong2Mang(a, b, na, nb));

	printf("\nCac phan tu xuat hien 1 trong 2 mang: ");
	LietKePhanTuXuatHien1Trong2Mang(a, b, na, nb);

	printf("\nSo lan xuat hien cua mang a trong mang b = %d", DemSoLanXuatHienCuaMangATrongMangB(a, b, na, nb));

}
