/**
Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không?
**/

main(){
    int n, b=1;

    printf("Nhap n: ");
    scanf("%d", &n);

    int temp= n;

    while(temp>0){
        if((temp%10)%2!=0){
            b=0;
            break;
        }
        temp/=10;
    }
    if(b==1)
        printf("%d toan chu so chan\n", n);
    else
        printf("%d khong toan chu so chan\n", n);
}
