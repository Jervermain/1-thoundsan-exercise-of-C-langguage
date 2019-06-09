/// Viết chương trình In ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93.

#include <stdio.h>

main(){
    int i;
    for(i=1; i<100; i+=2){
        if(i!=5 && i!=7 && i!=93)
            printf("%d\t", i);
    }
}
