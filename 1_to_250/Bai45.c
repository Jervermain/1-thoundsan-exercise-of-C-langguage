/**
    Hãy tính tích các chữ số của số nguyên dương n.
**/


main(){
    int n, S=1, temp;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n==0)
        S=0;
    else{
        S=1;
        temp= n;

        while(temp>0){
            S*= temp%10;
            temp/=10;
        }
    }

    printf("Tich cac chu so cua %d la: %d\n", n, S);
}
