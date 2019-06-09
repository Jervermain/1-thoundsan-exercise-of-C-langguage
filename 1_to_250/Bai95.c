/**
Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị
tuyệt đối của nó.
**/

#include <stdio.h>

main(){
    float a, b, c;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    a= (a<0)? -a : a;
    b= (b<0)? -b : b;
    c= (c<0)? -c : c;

    printf("a= %.2f, b= %.2f, c= %.2f\n", a, b, c);
}
