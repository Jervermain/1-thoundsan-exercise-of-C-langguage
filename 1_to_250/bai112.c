#include<stdio.h>

main(){
	int i, j, m, n;

	printf("\nNhap m: ");
	scanf("%d", &m);

	// Câu a
	printf("\nNhap n: ");
	scanf("%d", &n);

	for(i = 1; i <= m; ++i){
		for(j = 1; j <= n; ++j) {
			printf("*");
		}
		printf("\n");
	}

	printf( "\n" );

	for(i = 1; i <= m; ++i){
		for(j = 1; j <= n; ++j) {
			if( i == 1 || i == m || j == 1 || j == n ){
				printf("*");
				if(j == n)
				printf( "\n" );
			}
			else
				printf(" ");
		}
	}
}
