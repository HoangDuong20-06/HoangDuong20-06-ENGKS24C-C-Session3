#include<stdio.h>
int main()
{
	//Khai bao do c va do f
	int celsius, fahrenheit;
	printf("Nhap do c: ");
	scanf("%d", &celsius);
	// Tinh do f
	fahrenheit = (celsius*1.8)+32;
	printf("Nhiet do f la: %d", fahrenheit);
	return 0;
}
