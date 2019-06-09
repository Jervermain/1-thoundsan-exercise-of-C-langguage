/**
    Hãy đếm số lượng chữ số lẻ của số nguyên dương n.
**/

main(){
    int n, count=0;

    printf("Nhap n: ");
    scanf("%d", &n);

    int temp= n;

    while(temp>0){
        if((temp%10)%2!=0)
            count++;
        temp/=10;
    }

    printf("So luong chu so le cua %d la: %d\n", n, count);
}
