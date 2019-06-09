/// 123.Viết hàm tìm một vị trí mà giá trị tại vị trí đó là một giá trị nhỏ nhất
/// trong mảng một chiều các số nguyên.

#include <stdio.h>

main(){
    int n;

    int index, min;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    min= arr[0];
    index= 0;

    for(int i=1; i<n; i++)
        if(arr[i]<min)  index= i;

    printf("index= %d\n", index);

}
