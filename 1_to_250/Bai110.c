/**
110.Cần có tổng 200.000đ từ 3 loại giấy bạc 1000đ, 2000đ, và 5000đ. Lập
chương tình để tìm tất cả các phương án có thể.
**/

#include<stdio.h>
/*
Bài tập này thực chất là giải hệ pt:
x * 1000 + y * 2000 + z * 5000 = 200.000
200 * 1000 = 200000 => x thuộc [0, 200]
100 * 2000 = 200000 => y thuộc [0, 100]
40 * 5000 = 200000 => z thuộc [0, 40]
*/

main(){
	int i, j, k;
    for (i = 0; i <= 200; ++i)
        for (j = 0; j <= 100; ++j)
            for (k = 0; k <= 40; ++k)
                if (i * 1000 + j * 2000 + k * 5000 == 200000)
                    printf("\n%d to 1000(VND) -  %d to 2000(VND) - %d to 5000(VND) ", i, j, k);
}
