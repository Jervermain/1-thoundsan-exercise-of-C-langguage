/// 126.Viết hàm tính tổng các giá trị âm trong mảng một chiều các số thực.
/// 127.Viết hàm sắp xếp mảng một chiều các số thực tăng dần.
#include <stdio.h>

void sort(float arr[], int n){
    int i, j;
    float temp;

    for(i=0; i<n-1; i++)
        for(j=1; j<n; j++){
            if(arr[i] > arr[j]){
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
}

void inPut(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", arr+i);
    }
}

main(){
    int n;
    float S=0;
    float arr[100];
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);


    inPut(arr, n);

    for(int i=0; i<n; i++)
        if(*(arr+i)<0)  S+= *(arr+i);
    printf("Tong cac so am: %.2f\n", S);

    sort(arr, n);
    for(int i=0; i<n; i++){
        printf("%.2f\t", arr[i]);
    }


}
