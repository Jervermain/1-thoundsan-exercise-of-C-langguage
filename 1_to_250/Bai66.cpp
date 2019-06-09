/**
Giải phương trình ax^4 + bx^2 + c = 0.
**/

#include <stdio.h>
#include <math.h>

int ptBac2(float a, float b, float c, float &x1, float &x2){
    float delta = b * b - 4 * a*c;
    if (delta < 0) {
        x1 = x2 = 0.0;
        return 0;
    }
    else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        return 1;
    }

    delta = sqrt(delta);
    x1 = (-b + delta) / (2 * a);
    x2 = (-b - delta) / (2 * a);
    return 2;

}

main(){
    float a, b, c;
    float x1, x2;
    int result;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b:");
    scanf("%f", &b);
    printf("Nhap c:");
    scanf("%f", &c);

    result= ptBac2(a, b, c, x1, x2);

    if(result==0)
        printf("Phuong trình vo nghiem\n");
    else if(result==1){
        if(x1<0)
            printf("Phuong trinh vo nghiem\n");
        else if(x1==0){
           printf("Phuong trinh co mot nghiem x=0\n");
        }else{
            printf("Phuong trình co 2 nghiem:\n");
            printf("x1= %.2f\n", sqrt(x1));
            printf("x2= %.2f\n", -sqrt(x1));
        }
    }else{
        if(x2<0){
            printf("Phuong trinh co 2 nghiem:\n");
            printf("x1= %.2f\n", sqrt(x1));
            printf("x2= %.2f\n", -sqrt(x1));
        }else if(x2==0){
            printf("Phuong trình co 3 nghiem:\n");
            printf("x1= %.2f\n", sqrt(x1));
            printf("x2= %.2f\n", -sqrt(x1));
            printf("x3= 0.00\n");
        }else{
            printf("Phuong trinh co 4 nghiem:\n");
            printf("x1= %.2f\n", sqrt(x1));
            printf("x2= %.2f\n", -sqrt(x1));
            printf("x3= %.2f\n", sqrt(x2));
            printf("x4= %.2f\n", -sqrt(x2));
        }
    }

}

