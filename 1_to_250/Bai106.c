/**
106.Viết chương trình nhập vào một số nguyên có ba chữ số. Hãy in ra cách
đọc của nó.
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void DocDv(char c){
     switch (c){
            case '1': {printf("Mot ");break;}
            case '2': {printf("Hai ");break;}
            case '3': {printf("Ba ");break;}
            case '4': {printf("Bon ");break;}
            case '5': {printf("Nam ");break;}
            case '6': {printf("Sau ");break;}
            case '7': {printf("Bay ");break;}
            case '8': {printf("Tam ");break;}
            case '9': {printf("Chin ");break;}
            case '0': {printf("Khong ");break;}
     }
}


void DocTram(char a[],int mod){
    if(mod){
        DocDv(a[0]);
        printf("Tram ");
    } else if(a[0]!='0'){
        DocDv(a[0]);
        printf("Tram ");
    }

    if(a[1]=='0'){
        if(a[0]!='0' & a[2]!='0') printf("le ");
    }else{
        if(a[1]=='1') printf("Muoi ");
        else {
            DocDv(a[1]);
            printf("Muoi ");
        }
    }

    if(a[2]!='0') DocDv(a[2]);

}


void CatChuoi(char s[],char k[],int a,int b){
     int dem=0,i;
     for (i=a;i<=b;i++){
            k[dem]=s[i];dem++;
     }
     k[dem]='\0';
}

void Doc(char s[]){
     int n=strlen(s),i;
     char tam[255]="\0",rong[255]="\0";

     if(n%3==0) strcpy(tam,s);
     else{
            for(i=0;i<3-n%3;i++) tam[i]='0';
            for(i=0;i<n;i++) tam[i+3-n%3]=s[i];
            tam[i+3-n%3]='\0';
     }

     int lap=strlen(tam)/3;
     int a=0,b=2;

     for(i=0;i<lap;i++){
         CatChuoi(tam,rong,a,b);
         if (i==0) DocTram(rong,0);
         else DocTram(rong,1);

         if(i==lap-1) printf("");
         else
             switch ((lap-i)%3){
                case 1: {printf("Ty ");break;}
                case 2: {printf("Nghin ");break;}
                case 0: {printf("Trieu ");break;}
            }
         a+=3;
         b+=3;
     }
}

main(){
    char s[200]="\0";
    printf("Nhap vao so can doc: ");
    gets(s);
    Doc(s);
}
