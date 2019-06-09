/**
    Tìm chữ số lớn nhất của số nguyên dương n.
**/

main(){
    int n, temp, k, max=0;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n<10)
        max=n;
    else{
        temp= n;

        while(temp>0){
            k= temp%10;
            if(k>max)
                max= k;
            temp/=10;
        }
    }

    printf("Chu so lon nhat cua %d la: %d\n", n, max);
}
