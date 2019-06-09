/**
174.(*) Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng
khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a,b)
trong mảng thỏa điều kiện a <= b.

175.(*) Cho amngr số thực có nhiều hơn hai giá trị và các giá trị trong
mảng khác nhau từng đôi một. Hãy viết hàm tìm hai giá trị gần nhau
nhất trong mảng (gannhaunhat). Lưu ý: Mảng có các giá trị khác nhau
từng đôi một còn có tên là mảng phân biệt.
**/

#include <stdio.h>

#include <cmath>
using namespace std;

void gannhaunhat(float a[], int n)
{
	int i, j;
	float ganNhat = (abs)(a[0] - a[1]);
	for(i = 1; i < n-1; i++){
		for(j = i + 1; j < n; j++){
			if((abs)(a[i] - a[j]) < ganNhat)
				ganNhat = (abs)(a[i] - a[j]);
		}
	}
	printf("\nNhung cap gia tri gan nhau nhat: \n");

	for(i = 1; i < n-1; i++){
		for(j = i + 1; j < n; j++){
			if((abs)(a[i] - a[j]) == ganNhat)
				printf("\t<%.3f,%.3f> vi tri <a[%d],a[%d]>\n", a[i], a[j], i, j);
		}
	}
}

void LietKe(float a[], int n){
	int i, j;
	printf("\nCac cap gia tri (a, b) thoa DK a <= b , khac nhau tung doi mot: ");
	for (i = 0; i < n; i++){
		for (j = i+1; j < n; j++){
			if (a[i] < a[j] || a[i] == a[j])
				printf("\nCap <%.3f, %.3f> vi tri <a[%d],a[%d]>", a[i], a[j], i, j);
		}
	}
}


void inPut(float a[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", &a[i]);
    }
}


void outPut(float a[], int n){
     for(int i=0; i<n; i++){
        printf("%.3f\t", a[i]);
    }
}

main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<2);

    float a[n];

    printf("\nNhap mang so thuc\n");
    inPut(a, n);

    printf("\nXuat mang so thuc\n");
    outPut(a, n);

    LietKe(a, n);
    gannhaunhat(a,n);
}
