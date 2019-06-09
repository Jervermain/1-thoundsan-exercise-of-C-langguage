///Kiểm tra số nguyên 4 byte có dạng 2^k hay không?
#include <stdio.h>

int check(int n);

main()
{
    int n;
    int i;

    printf("Nhap n: ");
    scanf("%d", &n);

    check(n) ?   printf("%d la so co dang 2^k\n", n) : printf("%d khong co dang 2^k\n", n);
}

int check(int n)
{
	int flag = 1;
    n = n < 0 ? -n : n;
    if(n <= 2)
        return 1;

	while(n > 1)
	{
		int du = n % 2;
		if(du != 0)
			flag = 0;
		n /= 2;
	}
	if(flag==1)
      return 1;
    else
      return 0;
}
