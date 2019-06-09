/**
Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm ước chung lớn nhất
của hai giá trị này.
**/
main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    printf("UCLN= %d\n", UCLN(a, b));
}

int UCLN(int a, int b){
    if(a==b)
        return a;
    while(a*b!=0){
        if(a>b)
            a%=b;
        else
            b%=a;
    }
    return a+b;
}
