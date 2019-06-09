/// 122.Tìm giá trị lớn nhất trong mảng một chiều các số thực.

main(){
    int n;

    int max;

    printf("Nhap n: ");
    scanf("%d", &n);

    float arr[]= new float[n];

    max= arr[0];

    for(int i=1; i<n; i++)
        if(arr[i]>max)  max= arr[i];

    printf("max= %d\n", n);

}
