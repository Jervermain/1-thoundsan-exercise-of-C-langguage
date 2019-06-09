/// Bài 77 giống bài 1
/// Viết chương trình tính tổng của dãy số sau : S(n) = 1 + 2 + 3 + ... + n.

int deQuy(int n){
    if(n==1) return 1;
    return n+deQuy(n-1);
}

main(){
    int n;
    do{
        printf("\nNhap n(n >= 1) : ");
        scanf("%d", &n);
        if(n < 1)
            printf("\n N phai >= 1. Xin nhap lai !");
	}while(n < 1);

    printf("Tong= %d\n", deQuy(n));
}
