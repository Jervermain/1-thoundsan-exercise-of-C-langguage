/**
Viết chương trình kiểm tra một số có phải số nguyên tố hay không.
**/

#include <stdio.h>

int snt(int n){
    if(n==2 || n ==3)
        return 1;
    if (n>3){
        int i;
        for(i=2; i<sqrt(n); i++){
            if(n%i==0)  return 0;
        }
        return 1;
    }
    return 0;
}

main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    snt(n)? printf("%d la so nguyen to\n", n) : printf("%d khong phai so nguyen to\n", n);
}
