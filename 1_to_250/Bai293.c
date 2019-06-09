#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

void LietKeTatCaMangCon(int a[],int n)
{
	int ChieuDai;  // độ dài mảng con
	for(int i = 0; i < n; i++)
	{
		for(ChieuDai = 1; ChieuDai <= n; ChieuDai++) // nếu bỏ vòng for này thì sao ?
		{
			for(int j = i; j < ChieuDai; j++)
			{
				printf("%4d", a[j]);
			}
			printf("\n");
		}
	}
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
	printf("\nTat ca cac mang con la: \n");
	LietKeTatCaMangCon(a, n);

	getch();
	return 0;
}
