#include<stdio.h>
#include<string.h>

int main () {
	
	char s[100];
	char m[100];
	char a[] = "laptrinhc@gmail.com";
	char b[] = "Demo1234";
	
	printf("Nhap tai khoan: ");
	scanf("%s", s);
	if (strcmp(s, a) != 0 ) {
		printf("Vui long dang nhap lai");
	}
	else {
		printf("Nhap mat khau: ");
		scanf("%s", m);
		if ( strcmp(m, b) == 0) {
			printf("Login successful!");
		}
		else  
		do {
			printf("Vui long nhap lai mat khau: ");	
			scanf("%s", m);
		} while ( strcmp(m, b) != 0); 
		printf("Login successful!");
	}
	return 0;
}
