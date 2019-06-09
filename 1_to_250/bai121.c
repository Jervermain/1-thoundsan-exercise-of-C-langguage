/**
Hãy viết chương trình liệt kê tất cả các số Amstrong năm trong đoạn
[1,1.000.000].
**/

#include <stdio.h>
#include <math.h>

#define MAX 1000000

int amstrong(long n){
    int i, _n, S, count;

    _n= n;
    S= 0;
    count=0;

    while (_n != 0) {
     count++;
     _n = _n/10;
    }

  _n = n;

    while (_n != 0) {
        i = _n%10;
        S+= pow(i, count);
        _n = _n/10;
    }

    if(S==n)    return 1;
    return 0;
}

main(){
    long i;

    for(i=0; i<= MAX ; i++)
        if(amstrong(i)) printf("%d\t", i);
}
