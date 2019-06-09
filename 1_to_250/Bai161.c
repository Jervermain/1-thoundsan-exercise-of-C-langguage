/**
161.Cho mảng một chiều các số nguyên, hãy tìm giá trị đầu tiên trong mảng
nằm trong khoảng (x,y) cho trước (dautientrongdoan). Nếu mảng
không có giá trị thỏa điều kiện trên thì hàm trả về giá trị là x.
**/

#include <stdio.h>

int dautientrongdoan(int a[], int n, int x, int y){
	int dem = 0;
	int i;
	for(i = 0; i < n; i++){
		if(a[i] >= x && a[i] <= y){
			dem++;
			break;
		}
	}
	if(dem == 0)
		return x;
	return a[i];
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

    printf("\nNhap x: ");
	scanf("%d", &x);

	printf("\nNhap y: ");
	scanf("%d", &y);

	int ketqua = dautientrongdoan(a, n, x, y);
	printf("\nGia tri dau tien nam trong doan [%d, %d] la %d", x, y, ketqua);

}
