/**
    Hãy tính tích các chữ số lẻ của số nguyên dương n.
**/


main(){
    int n, T, k, temp;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n==0)
        T=0;
    else{
        T=1;
        temp= n;

        while(temp>0){
            k= temp%10;
            if(k%2!=0)
                T*=k;
            temp/=10;
        }
    }

    printf("Tich cac chu so le cua %d la: %d\n", n, T);
}
