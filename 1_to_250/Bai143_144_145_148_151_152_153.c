/// bai 143, 144, 145, 148, 149, 151, 152, 153
#include <stdio.h>

int channhonhat(int arr[], int n){
    int i;
    int chan=10000;

    for(i=0; i<n; i++)
        if(arr[i]%2==0 && arr[i]<chan)    chan=arr[i];

    if(chan==10000) return -1;
    return chan;
}

int hoanthiennhonhat(int arr[], int n){
    int i;
    int ht=9999;

    for(i=0; i<n; i++)
        if(check_sohoanthien(arr[i]) && arr[i]<ht)    ht=arr[i];

    if(ht==9999) return 0;
    return ht;
}

int nguyentolonnhat(int arr[], int n){
    int i, nt=0;
    for(i=0; i<n; i++)
        if(check_snt(arr[i]) && arr[i] > nt)    nt= arr[i];

    return nt;
}

int hoanthiencuoi(int arr[], int n){
    int i;
    int ht=-1;

    for(i=0; i<n; i++)
        if(check_sohoanthien(arr[i]))    ht=arr[i];

    return ht;
}


int nguyentocuoi(int arr[], int n){
    int i, nt=-1;
    for(i=0; i<n; i++)
        if(check_snt(arr[i]))    nt= arr[i];

    return nt;
}

int hoanthiendau(int arr[], int n){
    int i;
    for(i=0; i<n; i++)
        if(check_sohoanthien(arr[i]))    return arr[i];

    return -1;
}

int check_sohoanthien(int n){
    int S;
    int i;
    int sum = 0;
    for(i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) return 1; // tra ve true
    return 0;
}

int nguyentodau(int arr[], int n){
    int i;
    for(i=0; i<n; i++)
        if(check_snt(arr[i]))    return arr[i];

    return -1;
}

int check_snt(int n){
    if(n==2 || n ==3)
        return 1;
    if (n>3){
        int i;
        for(i=2; i<sqrt(n); i++){
            if(n%i==0)  return 0;
        }
        return 1;
    }
    return 0;
}

int chandau(int arr[], int n){
    int i;
    for(i=0; i<n; i++)
        if(arr[i] %2 == 0)    return arr[i];

    return -1;
}


void inPut_I(int arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", arr+i);
    }
}


main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    int arr_I[n];
    printf("\nNhap mang so nguyen\n");
    inPut_I(arr_I, n);

    printf("\n Chan dau= %d", chandau(arr_I, n));
    printf("\n Nguyen to dau= %d", nguyentodau(arr_I, n));
    printf("\n Hoan thien dau= %d", hoanthiendau(arr_I, n));
    printf("\n Nguyen to cuoi= %d", nguyentocuoi(arr_I, n));
    printf("\n Hoan thien cuoi= %d", hoanthiencuoi(arr_I, n));
    printf("\n Nguyen to lon nhat= %d", nguyentolonnhat(arr_I, n));
    printf("\n Hoan thien nho nhat= %d", hoanthiennhonhat(arr_I, n));
    printf("\n Chan nho nhat= %d", channhonhat(arr_I, n));
}
