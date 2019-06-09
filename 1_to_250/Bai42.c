/**
    Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao
cho S(k) < n. Trong đó chuỗi S(k) được định nghĩa như sau : S(k) = 1 +
2 + 3 + ... + k.
**/

main(){
    int n;
    int k;
    int number=0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(k=n; k>0; k--){
        if(tong(k)<n){
            number= k;
            break;
        }
    }
     if(number==0)
        printf("Khong co gia tri nao thoa man\n");
     else
        printf("%d thoa man\n", k);
}

int tong(int k){
    if(k==1) return 1;
    else
        return k+tong(k-1);
}
