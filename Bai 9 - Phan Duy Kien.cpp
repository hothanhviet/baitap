#include<stdio.h>

int main() {
	float a,b;
	
	printf("Nhap so 1 de chon don vi tien te Viet Nam");
	printf("\nNhap so 2 de chon don vi tien te My");
	printf("\nChon don vi tien te: ");  scanf("%f", &a);
	printf("\nNhap so tien: "); scanf("%f", &b);
	
	if (a == 2) {
		printf("%.2f VND", b*23000);
		printf("\n%.2f Pound", b*0.73);
		printf("\n%.2f Yen", b*110.52);
		printf("\n%.2f Won", b*1151.73);		
	}
	
	else if (a == 1) {
		printf("%.2f USD\n", b/23000 );
		printf("%.2f Yen\n", b*(110.52/23000) );
		printf("%.2f Pound\n", b*(0.73/23000) );
		printf("%.2f Won", b*(1151.73/23000) );
	}
	
	else {
		printf("Don vi tien te nay chua duoc cap nhat!");
	}
		
	return 0;
}
