/// Tìm ước số chung lớn nhất của hai số nguyên dương.

main(){
    int a, b;

    do{
        printf("\nNhap a: ");
        scanf("%d", &a);
        printf("Nhap b: ");
        scanf("%d", &b);

        if(a < 1 || b< 1)
            printf("\Phai nhap a va b nguyen duong !");
	}while(a < 1 || b< 1);

	if(a==b)
        printf("UCLN= %d\n", a);
	else{
        while(a*b!=0){
            if(a>b)
                a%=b;
            else
                b%=a;
        }

        printf("UCLN= %d\n", b+a);
    }
}
