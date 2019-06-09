/**
    Hãy tính tổng các chữ số chẵn của số nguyên dương n.
**/

main(){
    int n, S=0, k;

    printf("Nhap n: ");
    scanf("%d", &n);

    int temp= n;

    while(temp>0){
        k= temp%10;
        if(k%2==0)
            S+=k;
        temp/=10;
    }

    printf("Tong cua chu so chan cua %d la: %d\n", n, S);
}
