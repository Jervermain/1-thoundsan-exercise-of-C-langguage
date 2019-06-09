#include <stdio.h>

main(){
    float S=(float)1/2;
    int n;
    int i;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(i=2; i<=n ; i++){
        S= 1/(1+S);
    }

    printf("S= %f\n", S);
}
