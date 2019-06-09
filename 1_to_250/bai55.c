/**
Hãy đêm số lượng chữ số đầu tiên của số nguyên dương n.
**/

main(){
    int n, temp1, temp2, k, f, count;

    printf("Nhap n: ");
    scanf("%d", &n);

    if(n<10){
        count=1;
        f=n;
    }
    else{
        temp1= n;
        temp2= n;

        while(temp1>0){
            k= temp1%10;
            temp1/=10;
        }

        f=k;
        count=0;

        while(temp2>0){
            k= temp2%10;
            if(k==f)
                count++;
            temp2/=10;
        }
    }

    printf("Chu so dau tien cua %d la %d xuat hien %d lan\n", n, f, count);
}
