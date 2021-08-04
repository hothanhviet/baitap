#include<stdio.h>

int main() {
	int a;
	printf("Nhap so can chuyen tu he thap phan sang nhi phan: ");
	scanf("%d", &a);
	
	if ( a < 0) {
		printf("Khong the chuyen doi so am");
	}
	else {
		long sodu;
		long tong = 0, i = 1;
		do {
			sodu = a % 2;
			tong = tong + (i * sodu);
			a = a / 2;
			i = i * 10;
		} while ( a > 0);
		printf("%ld", tong);
	}
	return 0;
}
