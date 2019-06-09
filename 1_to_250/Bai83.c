/**Viết chương trình nhập vào hai số thực. Kiểm tra xem chúng có cùng
dấu hay không.
**/

main(){
    float a, b;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    (a*b)>0? printf("%.2f va %.2f cung dau\n", a, b) : printf("%.2f va %.2f khac dau\n", a, b);
}
