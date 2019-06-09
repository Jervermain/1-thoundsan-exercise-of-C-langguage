/// Nhập vào tháng của một năm. Cho biết tháng thuộc químấy trong năm.
#include <stdio.h>

main(){
    int m;

    do{
        printf("\nNhap vao thang: ");
        scanf("%d", &m);
        if(m < 0 || m>12)
            printf("Hay nhap vao mot thang !");
	}while(m < 0 || m>12);

    switch(m){
        case 1: case 2: case 3:
            printf("Thang %d thuoc quy I\n", m);
            break;
        case 4: case 5: case 6:
            printf("Thang %d thuoc quy II\n", m);
            break;
        case 7: case 8: case 9:
            printf("Thang %d thuoc quy III\n", m);
            break;
        case 10: case 11: case 12:
            printf("Thang %d thuoc quy IV\n", m);
            break;
    }
}
