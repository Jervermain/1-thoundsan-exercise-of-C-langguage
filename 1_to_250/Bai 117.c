/**
117. Viết chương trình nhập n và tính tổng
S(n) = x + x^2 + ... + x^n
**/

#include <stdio.h>

long tong(int n, int x){
    if(n==1)    return x;
    return pow(x, n) + tong(n-1, x);
}

main(){
    int n, x;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        printf("Nhap x: ");
        scanf("%d", &x);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);

    printf("S= %d\n", tong(n, x));

}
