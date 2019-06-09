/// bai 142, 146, 147, 150, 154

#include <stdio.h>

int vtamlonnhat (float arr[], int n){
    float max= -9999;
    int index= -1;

    int i;
    for(i=0; i<n; i++)
        if(arr[i] < 0  && arr[i] > max){
            max= arr[i];
            index= i;
        }

    if(max==-9999) return -1;
    return index;
}

float amlonnhat(float arr[], int n){
    float max= (float)-9999.0;
    int i;
    for(i=0; i<n; i++)
        if(arr[i] < 0  && arr[i] > max)    max= arr[i];

    if(max==-9999) return 0;
    return max;
}

float duongcuoi(float arr[], int n){
    int i;
    int duong=-1;

    for(i=0; i<n; i++)
        if(arr[i] > 0)    duong= arr[i];

    return duong;
}

float amdau(float arr[], int n){
    int i;
    for(i=0; i<n; i++)
        if(arr[i] < 0)    return arr[i];

    return -1;
}

float nhonhat(float arr[], int n){
    float min= arr[0];
    int i;
    for(i=1; i<n; i++)
        if(arr[i] < min)    min= arr[i];

    return min;
}

void inPut_F(float arr[], int n){
     for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%f", arr+i);
    }
}

main(){
    int n;

    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<1);

    float arr_F[n];
    printf("\nNhap mang so thuc\n");
    inPut_F(arr_F, n);

    printf("\nGTNN= %.2f", nhonhat(arr_F, n));
    printf("\nGT am dau= %.2f", amdau(arr_F, n));
    printf("\nGT duong cuoi= %.2f", duongcuoi(arr_F, n));
    printf("\nGT am lon nhat= %.2f", amlonnhat(arr_F, n));
    printf("\nVi tri GT am LN= %d", vtamlonnhat(arr_F, n));

}
