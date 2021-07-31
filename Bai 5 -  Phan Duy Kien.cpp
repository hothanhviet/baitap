#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a<0) {printf("So dien khong hop le");}
    else if(a>0 && a<=50) {printf("%d VND", a*1000);}
    else if(a>50 && a<=100)  {printf("%d VND",50*1000 + (a-50)*1300);}
    else if(a>101 && a<=200) {printf("%d VND",50*1000 + 50*1300 + (a-100)*1500);}
    else if(a>201 && a<=300) {printf("%d VND",50*1000 + 50*1300 + 100*1500 + (a-200)*1800);}
    else if(a>301 && a<=400) {printf("%d VND",50*1000 + 50*1300 + 100*1500 + 100*1800 + (a-300)*2000);}
    else                     {printf("%d VND",50*1000 + 50*1300 + 100*1500 + 100*1800 + 100*2000 + (a-400)*2500);}
	return 0;
}
