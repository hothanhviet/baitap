#include<stdio.h>

int main() {
	int n,i;
	int count=0;
	scanf("%d",&n); {
		if ( n == 2 ) { 
			printf("%d la so nguyen to",n);
			}
		else if ( n < 2) {
			printf("%d khong la so nguyen to",n);
			}	
		else {
			for ( i=1; i<= n; i++) { 
				if ( n % i ==0) {
					count = count + 1;
				}
			}
			if ( count == 2) {
				printf("%d la so nguyen to",n);
				}
			else {
				printf("%d khong la so nguyen to",n);
				}			
			}
	}
	return 0;
}
