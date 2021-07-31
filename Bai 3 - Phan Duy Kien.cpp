#include<stdio.h>

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if ( a<0 || a>10 || b<0 || b>10 || c<0 || c>10) {printf("Diem nhap khong hop le");}
    else if (a>=8 && (b>=8 || c>=8)) {printf("Hoc luc gioi");}
    else if (a>=6.5 && (b>=6.5 || c>=6.5)) {printf("Hoc luc kha");}
    else if (a>=5 && (b>=5 || c>=5)) {printf("Hoc luc trung binh");}
    else {printf("Hoc luc trung binh");}
    return 0;
}
