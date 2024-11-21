#include <stdio.h>
int main()
{
    //Khai bao va khoi tao hai so nguyen
	int number1 = 24; // Bien number1 co gia tri bang 20
	int number2 = 6; // Bien number2 co gia tri bang 6
	// Khai bao va khoi tao mot bien de luu ket qua
	int sum;
	int minus;
	int multy;
	int devide;
	// Khai bao va khoi tao cac phep tinh cua hai so nguyen
	sum = number1 + number2; // Tong cua hai so nguyen
	minus = number1 - number2; // Hieu cua hai so nguyen
	multy = number1 * number2; // Tich cua hai so nguyen
	devide = number1 / number2; // thuong cua hai so nguyen
	// In ra ket qua
	printf("Tong cua %d + %d = %d\n", number1, number2, sum);
	printf("Hieu cua %d - %d = %d\n", number1, number2, minus);
	printf("Tich cua %d * %d = %d\n", number1, number2, multy);
	printf("Thuong cua %d / %d = %d\n", number1, number2, devide);
	return 0;	
}
