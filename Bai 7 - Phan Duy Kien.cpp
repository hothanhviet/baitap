#include<stdio.h>

int main() {
	
	int d, m, y;
	char* a;
	char* b;
	
	printf("Nhap ngay thang nam o dang so");
	printf("\nNgay: "); scanf("%d", &d); 
	printf("\nThang: "); scanf("%d", &m);
	printf("\nNam: ");  scanf("%d",&y);
	
	if      ( m == 1)  { a = "January";}
	else if ( m == 2)  { a = "February";}
	else if ( m == 3)  { a = "March";}
	else if ( m == 4)  { a = "April";}
	else if ( m == 5)  { a = "May";}
	else if ( m == 6)  { a = "June";}
	else if ( m == 7)  { a = "July";}
	else if ( m == 8)  { a = "August";}
	else if ( m == 9)  { a = "September";}
	else if ( m == 10) { a = "October";}
	else if ( m == 11) { a = "November";}
	else if ( m == 12) { a = "December";}
	
// Minh moi hoc den Do while, chua hoc phan mang nen lam hoi ngu =(((

	if ( d == 1 || d == 31 ) { b = "st";}
	else if ( d == 2 )       { b = "nd";}
	else if ( d == 3 )       { b = "rd";}
	else					 { b = "th";}
	
	printf("\n%s %d%s, %d", a, d, b, y);		

	return 0;
}
