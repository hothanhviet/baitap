#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for ( int i=2; i<= (n-1); i++)
	{ 
		if ( n % i ==0) 
		{
			printf("%d khong la so nguyen to",n); break;
		}
	printf("%d la so nguyen to",n); break;
	}
	return 0;
}
