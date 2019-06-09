/**
Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái
sang phải hay không?
**/

main(){
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(ktraTangDan(n))
        printf("%d la so tang dan\n", n);
    else
        printf("%d khong phai la so tang dan\n", n);
}

int ktraTangDan(int n){
    int k;

    if(n<10)
        return 0;
    else{
        k= n%10;
        n/=10;
        while(n>0){
            if(n%10>k)
                return 0;
            k= n%10;
            n/=10;
        }
        return 1;
    }
}
