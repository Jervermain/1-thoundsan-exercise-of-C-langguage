#include<stdio.h>

main(){
	int i, j, n;

	printf("\nNhap n: ");
	scanf("%d", &n);

	// C�u a:
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n + i - 1; ++j)
			printf((j < n - i + 1) ? " " : "*");
		putchar('\n');
	}



	// C�u b:
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n + i - 1; ++j)
			printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "*" : " ");
		putchar('\n');
	}
	printf("\n");

	// C�u c:
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n; ++j)
			printf((j <= i) ? "*" : " ");
		printf("\n\n");
	}

	// C�u d
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n; ++j)
			printf((j == i || j == 1 || i == n) ? "*" : " ");
		printf("\n");
	}

}
