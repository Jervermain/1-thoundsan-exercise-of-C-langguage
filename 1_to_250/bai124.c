/**
124.Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ
hơn 2004 hay không?
**/


#include <stdio.h>

int check(int n){
    if(n%2==0 && n<2004)
        return 1;
    return 0;
}

main(){
    int n;

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

    for(int i=0; i<n; i++)
        if(check(arr[i]))  printf("%d\t", arr[i]);

}
