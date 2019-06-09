/**
128.Viết hàm nhật mảng một chiều các số thực.
129.Viết hàm nhập mảng một chiều các số nguyên..
130.Viết hàm xuất mảng một chiều các số thực.
131.Viết hàm xuất mảng một chiều các số nguyên.
132.Viết hàm liệt kê các giá trị chẵn trong mảng một chiều các số nguyên.
133.Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng một
chiều các số thực..
**/
#include <stdio.h>

void inPut_F(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", arr+i);
    }
}

void inPut_I(int arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", arr+i);
    }
}

void outPut_F(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("%.2f\t", arr[i]);
    }
}

void outPut_I(int arr[], int n){
     for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

void giaTriChan_I(int arr[], int n){
    printf("\nCac gia tri chan mang so nguyen: ");
     for(int i=0; i<n; i++){
        if(arr[i]%2==0)
            printf("%d\t", *(arr+i));
    }
    printf("\n");
}

void vTriAm_F(float arr[], int n){
    printf("\nCac vi tri mang gia tri am mang so thuc: ");
     for(int i=0; i<n; i++){
        if(arr[i]<0)
            printf("%d\t", i);
    }
    printf("\n");
}

main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    float arr_F[n];
    int arr_I[n];

    printf("\nNhap mang so thuc\n");
    inPut_F(arr_F, n);
    printf("\nXuat mang so thuc\n");
    outPut_F(arr_F, n);

    printf("\nNhap mang so nguyen\n");
    inPut_I(arr_I, n);
    printf("\nXuat mang so nguyen\n");
    outPut_I(arr_I, n);

    giaTriChan_I(arr_I, n);
    vTriAm_F(arr_F, n);

}
