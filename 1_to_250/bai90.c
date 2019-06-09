/**
Viết chương trình tìm số nguyên dương m lớn nhất sao cho
1 + 2 + 3 + ... + m < N.
**/

/// Tương tự bài 87

#include <stdio.h>

main(){
    int N;
    int m;

    printf("Nhap N: ");
    scanf("%d", &N);

    m= (int)(-1+sqrt(1 + 4*2*N))/2 + 1;

    printf("So do la n= %d\n", m);
}
