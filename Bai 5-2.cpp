#include<stdio.h>

int main() {
	long long n, sodu;
	long long tong = 0;
	printf("Nhap so de tinh tong: ");
	scanf("%lld", &n);
	
	while ( n > 0 ) {
		sodu = n % 10;
		tong = tong + sodu;
		n = n / 10;
	}
	printf("%lld", tong);
	return 0;
}
