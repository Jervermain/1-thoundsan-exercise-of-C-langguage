/// Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N.

main(){
    int n, S=0;
    int i;

    do{
        printf("\nNhap n(n >= 2) : ");
        scanf("%d", &n);
        if(n < 2)
            printf("\n N phai >= 2. Xin nhap lai !");
	}while(n < 2);

	for(i=1; i<n; i+=2){
        S+=i;
	}

	printf("S= %d\n", S);

}
