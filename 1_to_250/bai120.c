/// 120.Liệt kê tất cả các số chính phương nhỏ hơn n.

int soChinhPhuong(int n){
    int i= sqrt(n);
    if (i*i==n) return 1;
    return 0;
}

main(){
    int n;
    int i;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);

    for(i=1; i<n; i++)
        if(soChinhPhuong(i))    printf("%d\t", i);

}
