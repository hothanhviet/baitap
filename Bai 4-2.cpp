#include <stdio.h>
 
int main() {
	printf("Tao tam giac deu\n");
	
	int n,i,j;
 	printf("Nhap kich thuoc canh: ");
 	scanf("%d", &n);
 	
	for(i = 1; i <= n; i++) {
    	for(j = 1; j <= n-i; j++) {
        	printf(" ");             // Neu muon hieu quy luat de hon thi thay " " thanh "-" và tuong tu nhu duoi
 		}
 		
    	for(j = 1; j <= i; j++) {
        	printf("* ");
 		}
    	printf("\n");
   }
   return 0;
}

