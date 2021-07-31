#include<stdio.h>

int main() {
    long n;
    long thue;
    scanf("%ld",&n);
    if (0<n && n<=200000000) { printf("%ld VND",thue = n*0.03);}
    else if (200000000<n && n<=1000000000) { printf("%ld VND",thue = n*0.05);}
    else if (n>1000000000) {printf("%ld VND",thue = n*0.1);} 
	else {printf("%ld VND",thue =0);}
	return 0;
}
