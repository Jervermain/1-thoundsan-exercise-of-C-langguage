
#include <stdio.h>

void Bai181(int a[], int n){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0 && (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)){
			flag = 1;
			printf("%4d", a[i]);
		}
	}
	if (flag == 0)
        printf("Mang ko co gia tri do");
}

void Bai180(int a[], int n){
	int flag = 0;
	for (int i = 0; i < n; i++){
        if (a[i] > abs(a[i - 1]) && a[i] < abs(a[i + 1]))  {
            flag = 1;
            printf("%4d", a[i]);
        }
    }
	if (flag == 0)
        printf("Mang ko co gia tri do");
}

void Bai179(int a[], int n){
	int flag = 0;
	for (int i = 0; i < n; i++){
        if (a[i] > abs(a[i + 1])){
            flag = 1;
            printf("%4d", a[i]);
        }
    }
	if (flag == 0)
        printf("Mang ko co gia tri do");
}

void LietKeChanTrongDoanXY(int a[], int n, int x, int y){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0 && x <= a[i] && a[i] <= y)
			printf("\n%4d", a[i]);
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
    int x, y;

    printf("\nNhap mang so nguyen\n");
    inPut(a, n);

    printf("\nXuat mang so nguyen\n");
    outPut(a, n);

    printf("\nCac so chan trong mang thuoc [%d, %d] la: ", x, y);
	LietKeChanTrongDoanXY(a, n, x, y);

	printf("\nCac so chan trong mang thoa dieu kien\n lon hon tri tuyet doi cua so dung lien sau no:\n ");
	Bai179(a, n);

	printf("\nCac so trong mang thoa dieu kien\n ");
	Bai180(a, n);

	printf("\nCac so trong mang thoa dieu kien\n ");
	Bai181(a, n);
}
