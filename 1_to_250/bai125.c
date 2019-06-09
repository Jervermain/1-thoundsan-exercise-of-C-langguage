/**
125.Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.
**/


int snt(int n){
    if(n==2 || n==3)   return 1;
    if(n>3 && n<100){
        int i;
        for(i=2; i<sqrt(n); i++)
            if(n%i==0)  return 0;
        return 1;
    }
    return 0;
}


main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        if(n<1) printf("Nhap n>=1");
    }while(n<1);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
        if(snt(arr[i]))  printf("%d\t", arr[i]);

}
