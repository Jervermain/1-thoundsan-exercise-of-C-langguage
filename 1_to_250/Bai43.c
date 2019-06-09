/**
    Hãy đếm số lượng chữ số của số nguyên dương n.
**/
main(){
    int n, count=0;

    printf("Nhap n: ");
    scanf("%d", &n);

    int temp= n;

    while(temp>0){
        temp/=10;
        count++;
    }

    printf("So luong chu so cua %d la: %d\n", n, count);
}
