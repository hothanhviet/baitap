#include<stdio.h>

int main() {
	 
	 char kitu;
	 
	 printf("Nhap ki tu: ");  scanf("%c", &kitu);
	 
	 if ( ('a' <= kitu && kitu <= 'z') || ('A' <= kitu && kitu <= 'Z')) {
	 	printf("Ki tu");
	 }
	 else if ( '0' <= kitu && kitu <= '9') {
	 	printf("Chu so");
	 }
	 else {
	 	printf("Ki tu dac biet");
	 }
	 
	return 0;
}
