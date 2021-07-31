#include<stdio.h>
#include<math.h>

int main() {
	int n;
	float r,a,b,c;
    printf("Nhap so 1 de tinh dien tich hinh tron\n");
    printf("Nhap so 2 de tinh dien tich hinh chu nhat\n");
    printf("Nhap so 3 de tinh dien tich hinh tam giac\n");
    printf("Tuy chon: "); scanf("%d",&n);
    
    if ( n == 1 ) {
    	printf( "Nhap ban kinh hinh tron: ");
    	scanf( "%f", &r);
    	if ( r < 0) { 
			printf("Do dai cac canh khong duoc am hoac bang 0");
		}
		else {
    		printf( "Dien tich cua hinh tron la: %.2f", 3.14*r*r);
    		}    
	}
    	
	else if (n == 2) {
		printf( "Nhap do dai 2 canh cua hinh chu nhat: ");
		scanf( "%f %f", &a, &b);
		if ( a < 0 || b <0 ) {
			printf( "Do dai cac canh khong duoc am hoac bang 0");
		}
		else {
			printf( "Dien tich cua hinh chu nhat la: %.2f\n", a*b);			
		}
	}
		
	else if ( n == 3) {
		printf( "Nhap do dai 3 canh cua hinh tam gia: ");
		scanf( "%f %f %f", &a, &b, &c);
		if ( a < 0 || b < 0 || c < 0 ) {
			printf( "Do dai cac canh khong duoc am hoac bang 0");
			}
		else {
			float p;
			p = ( a + b + c ) / 2;
			printf( "Dien tich cua hinh tam giac la: %.2f\n", sqrt( p*(p - a)*(p - b)*(p - c) ) );		
			}
	}
	return 0;
}
