/// Tính S(n) = 1^3 + 2^3 + 3^3 + ... + n^3

main(){
    int n, S=0, i=1;

    do{
        printf("\nNhap n(n >= 1) : ");
        scanf("%d", &n);
        if(n < 1)
            printf("\n N phai >= 1. Xin nhap lai !");
	}while(n < 1);

	while(i<=n){
        S+=pow(i, 3);
        i++;
	}

	printf("S= %d\n", S);
}
