#include<stdio.h>

main(){
	int i, j, n;

	printf("\nNhap n: ");
	scanf("%d", &n);

	// Câu a:
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n + i - 1; ++j)
			printf((j < n - i + 1) ? " " : "*");
		putchar('\n');
	}



	// Câu b:
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n + i - 1; ++j)
			printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "*" : " ");
		putchar('\n');
	}
	printf("\n");

	// Câu c:
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n; ++j)
			printf((j <= i) ? "*" : " ");
		printf("\n\n");
	}

	// Câu d
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n; ++j)
			printf((j == i || j == 1 || i == n) ? "*" : " ");
		printf("\n");
	}

}
