/// 122.Tìm giá trị lớn nhất trong mảng một chiều các số thực.

#include <stdio.h>

main(){
    int n;

    float max;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);

    float arr[n];

    for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", &arr[i]);
    }

    max= arr[0];

    for(int i=1; i<n; i++)
        if(arr[i]>max)  max= arr[i];

    printf("max= %f\n", max);

}
