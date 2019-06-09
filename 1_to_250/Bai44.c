/**
    Hãy tính tổng các chữ số của số nguyên dương n.
**/

main(){
    int n, S=0;

    printf("Nhap n: ");
    scanf("%d", &n);

    int temp= n;

    while(temp>0){
        S+= temp%10;
        temp/=10;
    }

    printf("Tong cac chu so cua %d la: %d\n", n, S);
}
