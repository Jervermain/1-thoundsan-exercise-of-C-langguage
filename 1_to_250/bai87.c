/// Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + ... + n > 10000.
/// Có thể giải bằng vòng lặp hoặc dùng công thức cấp số cộng
/// S(n)= 2*(U1+ Un) / 2;
#include <stdio.h>

main(){
    int max;
    int n;

    printf("Nhap gioi han: ");
    scanf("%d", &max);

    n= (int)(-1+sqrt(1 + 4*2*max))/2 + 1;

    printf("So do la n= %d\n", n);
}
