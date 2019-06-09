/**
116.Viết chương trình nhập n và tính tổng
S(n) = 1 + 2 + 3 + ... + n.
**/

int tong(int n){
    if(n==1)    return 1;
    return n + tong(n-1);
}

main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);

    printf("S= %d\n", tong(n));
}
