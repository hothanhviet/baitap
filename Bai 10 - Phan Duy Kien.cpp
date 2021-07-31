#include<stdio.h>

int main() {
	
	int a,b,c;
	
    printf(" Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if ( (a < b && b < c) || ( a > b && b > c) ) {
    	printf("So %d la so trung vi", b);
	}
	
	else if ( (b < a && a < c) || (b > a && a > c) ) {
		printf("So %d la so trung vi", a);
	}
	
	else if ( (b < c && c < a) || (b > c && c > a) ) {
		printf("So %d la so trung vi", c);
	}
	
	else if ( a == b && a == c) {
		printf("Ba so bang nhau");
	}
	
	else {
		printf("Co hai so bang nhau => khong co so trung vi");
	}
	
	return 0;
}
