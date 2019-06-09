/**
119.Liệt kê tất cả các số nguyên tố nhỏ hơn n.
**/

int snt(int n){
    if(n==2 || n==3)   return 1;
    if(n>3){
        int i;
        for(i=2; i<sqrt(n); i++)
            if(n%i==0)  return 0;
        return 1;
    }
    return 0;
}

void main(){
    int n, i;
    printf("Nhap n: ");
    scanf("%d", &n);

    for(i=2; i<n; i++)
        if(snt(i)) printf("%d\t", i);

}
