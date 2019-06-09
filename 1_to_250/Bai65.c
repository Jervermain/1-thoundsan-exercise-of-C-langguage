/**
Giải phương trình ax^2 + bx + c = 0.
**/
#include <stdio.h>
#include <math.h>

main(){
    float a, b, c;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b:");
    scanf("%f", &b);
    printf("Nhap c:");
    scanf("%f", &c);

    if(a==0)
        printf("Nghiem x= %.2f\n", -b/a);
    else{
        float x1, x2;
        float dt= b*b - 4*a*c;

        if(dt<0)
            printf("Phuong trinh vo nghiem\n");
        else if(dt==0)
            printf("Phuong trinh co nghiem kep x= %f\n", -b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem x1= %f,\tx2= %f\n", (-b+sqrt(dt))/(2*a), (-b-sqrt(dt))/(2*a));
    }
}

