/// Liệt kê tất cả các ước số của số nguyên dương n.

#include <stdio.h>
#include <conio.h>

main ()
{
	int  i ,  n ;
	printf ( "Nhap n:" );
	scanf("%d" ,  & n );
	i  =  1 ;
	while ( i  <=  n ) {
		if ( n  %  i  ==  0 )
			printf ( "% 4d" ,  i );
		i  =  i  +  1 ;
	}
}
