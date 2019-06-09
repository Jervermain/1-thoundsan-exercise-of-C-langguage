/**
    Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n.
**/

main(){
    int n, temp, k;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n<10)
        k=n;
    else{
        temp= n;

        while(temp>0){
            k= temp%10;
            temp/=10;
        }
    }

    printf("Chu so dau tien cua %d la: %d\n", n, k);
}
