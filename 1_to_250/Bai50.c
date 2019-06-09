/**
Hãy tìm chữ số đảo ngược của số nguyên dương n.
**/


main(){
    int n, temp, k;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Chu so dao nguoc cua %d la: ", n);

    if(n<10)
        printf("%d", n);
    else{
        temp= n;

        while(temp>0){
            k= temp%10;
            printf("%d", k);
            temp/=10;
        }
    }
}
