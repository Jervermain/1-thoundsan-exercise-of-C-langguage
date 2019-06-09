/**
Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n.

**/

main(){
    int n, temp, k, max=0, count=1;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n<10){
        max=n;
    }
    else{
        temp= n;

        while(temp>0){
            k= temp%10;

            if(k==max)
                count++;
            if(k>max){
                max= k;
                count=1;
            }
            temp/=10;
        }
    }

    printf("Chu so lon nhat cua %d la: %d, xuat hien %d lan\n", n, max, count);
}
