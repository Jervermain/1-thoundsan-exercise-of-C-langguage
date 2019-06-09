#include <stdio.h>

main(){
    float x, S=0;
    int n;
    int i;

    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap n: ");
    scanf("%d", &n);

    for(i=1; i<=n ; i++){
        S= sqrt(pow(x, i)+S);
    }

    printf("S= %f\n", S);
}
