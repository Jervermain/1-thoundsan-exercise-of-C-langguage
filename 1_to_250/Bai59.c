/**
Hãy kiểm tra số nguyên dương n có phải số đối xứng hay không?
**/

main(){
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(ktraDoiXung(n))
        printf("%d la so doi xung\n", n);
    else
        printf("%d khong phai la so doi xung\n", n);
}

int ktraDoiXung(int n){
    int k, s=0, temp=n;

    if(temp<10)
        return 1;
    else{
        while(temp>0){
            k= temp%10;
            s= s*10+k;
            temp/=10;
        }
        if(s==n)
            return 1;
        return 0;
    }
}
