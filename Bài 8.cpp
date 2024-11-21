#include <stdio.h>

int main()
{
	//Khai bao so nguyen co 4 chu so
	int number,reverse,remainder;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
	// Dieu kien de dao nguoc so
	while (number<1000||number>9999){
		printf("So nhap vao khong hop le. Vui long nhap lai. \n");
		scanf("%d", &number);
	}
	// Dao nguoc so
	while (number!=0){
		remainder = number%10; // Lay chu so cuoi cung
		reverse = reverse*10+remainder;// Them so vao so nghich dao
		number /= 10;// Bo chu so cuoi cung khoi so ban dau
	}
	// In ra ket qua
	printf("So dao nguoc cua so nguyen la: %d", reverse);
	return 0;
}
