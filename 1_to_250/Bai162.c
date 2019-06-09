/**
162.Cho mảng một chiều các số thực. Hãy viết hàm tìm một vị trí trong
mảng thỏa hai điền kiện: có hai giá trị lân cận và giá trị tại vịt trí đó
bằng tích hai gia trị lân cận. Nếu mảng không tồn tại giá trị như vậy thì
hàm trả về giá trị - 1.
**/
#include <stdio.h>

int timvitrithoaDK(int a[], int n){
	int i = 1;
	for(; i < n - 1; i++){
		if(a[i] == a[i - 1] * a[i + 1])
			return i;
	}
	return -1;
}

void inPut(float a[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", &a[i]);
    }
}


void outPut(float a[], int n){
     for(int i=0; i<n; i++){
        printf("%.2f\t", a[i]);
    }
}

main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    float a[n];

    printf("\nNhap mang so thuc\n");
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    int vitri = timvitrithoaDK(a, n);
	printf("\nVi tri thoa dieu kien: co gia tri lan can\n va gia tri tai do = tich 2 gia tri lan can: %d", vitri);
}
