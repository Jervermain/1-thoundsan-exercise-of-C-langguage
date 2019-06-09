/**
    Tìm chữ số nhỏ nhất của số nguyên dương n.
**/

main(){
    int n, temp, k, min=9;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n<10)
        min=n;
    else{
        temp= n;

        while(temp>0){
            k= temp%10;
            if(k<min)
                min= k;
            temp/=10;
        }
    }

    printf("Chu so nho nhat cua %d la: %d\n", n, min);
}
