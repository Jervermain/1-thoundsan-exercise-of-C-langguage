/// bài 80 giống bài 16

main(){
    int n, i, T, M;
    float x, S;

    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap n: ");
    scanf("%d", &n);

    S= 0;
    i= 1;
    T= 1;
    M= 0;

    while(i<=n){
        T= T*x;
        M= M+i;
        S= S+ (float)T/M;
        i++;
    }

    printf("Tong S= %f\n", S);

}
