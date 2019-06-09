/**
    Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm bội chung nhỏ nhất
của hai giá trị này.
**/

main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    printf("BCNN= %d\n", BCNN(a, b));
}

int BCNN(int a, int b){
    int _a=a, _b=b;
    if(a==b)
        return a;
    int UCLN;
    while(a*b!=0){
        if(a>b)
            a%=b;
        else
            b%=a;
    }
    UCLN= a+b;

    return (_a*_b)/UCLN;
}
