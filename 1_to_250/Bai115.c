/**
115.Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh.
Tính điểm trung bình và xuất kết quả.
**/

void inPut(char &hoTen[30], float &dToan, float &dVan){
    printf("Ho ten: ");
    gets(hoTen);
    printf("Diem Toan: ");
    scanf("%f", &dToan);
    printf("Diem Van: ");
    scanf("%f", &dVan);
}

float dTB(float &dToan, float &dVan){
    return (dToan+dVan)/2;
}

main(){
    char hoTen[30];
    float dToan, dVan;

    inPut(hoTen, dToan, dVan);
    printf("Diem TB= %f\n", dTB(dToan, dVan));
}
