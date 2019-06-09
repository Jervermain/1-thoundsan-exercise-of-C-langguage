/**
134.Viết hàm tìm “giá trị lớn nhất” trong mảng một chiều số thực (lonnhat).

135.Tìm “giá trị dương đầu tiên” trong mảng một chiều các số thực
(duongdau). Nếu mảng không có giá trị dương thì trả về giá trị -1.

136.Tìm “số chẵn cuối cùng” trong mảng một chiều các số nguyên
(chancuoi). Nếu mảng không có giá trị chẵn thì trả về giá trị -1.

137.Tìm “một vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất” trong mảng
một chiều các số thực (vitrinhonhat).

138.Tìm “vị trí của giá trị chẵn đầu tiên” trong mảng một chiều các số
nguyên (vitrichandau). Nếu mảng không có giá trị chẵn thì hàm sẽ trả
về giá trị là – 1.

139.Tìm “vị trí số hoàn thiện cuối cùng” trong mảng một chiều các số
nguyen (vitrihoanthiencuoi). Nếu mảng không có số hoàn thiện thì trả
về giá trị - 1.

140.Hãy tìm “giá trị dương nhỏ nhất” trong mảng các số thực
(duongnhonhat). Nếu mảng không có giá trị dương thì trả về giá trị
không dương là – 1.

141.Hãy tìm “vị trí giá trị dương nhỏ nhất” trong mảng một chiều các số
thực (vtduongnhonhat). Nếu mảng không có giá trị dương thì trả về
một giá trị ngoài đoạn [0,n-1] là -1 nhằm mô tả không có vị trí nào thỏa
điều kiện.
**/

#include <stdio.h>

int vtduongnhonhat(float arr[], int n){
    float min= -1;
    int index= -1;

    int i;
    for(i=0; i<n; i++)
        if(arr[i] > 0  && arr[i] < min){
            min= arr[i];
            index= i;
        }

    return index;
}

float duongnhonhat(float arr[], int n){
    float min= -1;
    int i;
    for(i=0; i<n; i++)
        if(arr[i] > 0  && arr[i] < min)    min= arr[i];

    return min;
}

int vitrihoanthiencuoi(int arr[], int n){
    int index= -1;
    int i;
    for(i=0; i<n; i++)
        if(check_sohoanthien(arr[i]))
            index= i;
    return index;
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

int vitrichandau(int arr[], int n){
    int index=-1;
    int i;
    for(i=0; i<n; i++)
        if(arr[i] %2 ==0){
            index= i;
            break;
        }

    return index;
}

int vitrinhonhat(float arr[], int n){
    float min= arr[0];
    int index= 0;
    int i;

    for(i=1; i<n; i++)
        if(arr[i] < min){
            min= arr[i];
            index= i;
        }

    return index;
}

int chancuoi(int arr[], int n){
    int chan=-1;
    int i;
    for(i=0; i<n; i++)
        if(arr[i] %2 ==0)    chan= arr[i];

    return chan;
}

float lonnhat(float arr[], int n){
    float max= arr[0];
    int i;
    for(i=1; i<n; i++)
        if(arr[i] > max)    max= arr[i];

    return max;
}

float duongdau(float arr[], int n){
    float duong= -1;
    int i;
    for(i=0; i<n; i++){
        if(arr[i] > 0){
            duong= arr[i];
            break;
        }
    }

    return duong;
}

void inPut_F(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", arr+i);
    }
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

    float arr_F[n];
    int arr_I[n];

    printf("\nNhap mang so thuc\n");
    inPut_F(arr_F, n);

    printf("\nNhap mang so nguyen\n");
    inPut_I(arr_I, n);

    printf("\nBai 134: GTLN= %.2f", lonnhat(arr_F, n));
    printf("\nBai 135: GT duong dau  tien = %.2f", duongdau(arr_F, n));
    printf("\nBai 136: GT Chan cuoi= %d", chancuoi(arr_I, n));
    printf("\nBai 137: Vi tri GTNN= %d", vitrinhonhat(arr_F, n));
    printf("\nBai 138: Vi tri chan dau tien= %d", vitrichandau(arr_I, n));
    printf("\nBai 139: Vi tri hoan thien cuoi cung= %d", vitrihoanthiencuoi(arr_I, n));
    printf("\nBai 140: GT duong NN= %.2f", duongnhonhat(arr_F, n));
    printf("\nBai 141: Vi tri GT duong NN= %d", vtduongnhonhat(arr_F, n));



}

