///109.Viết chương trình in bảng cửu chương ra màn hình.


#include<stdio.h>

main(){
	for(int i = 1; i <= 10; ++i){
		for(int j = 2; j <= 9; ++j){
			printf("%c %d x %2d = %2d", 179, j, i, i * j);
		}
		printf("%c\n", 179);
	}

}
