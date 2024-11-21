#include<stdio.h>
int main()
{
	//Khai bao ban hinh tron, pi, chu vi, dien tich
	float radius,perimeter,acreage;
	float pi = 3.14;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &radius);
	// Tinh chu vi va dien tich hinh tron
	perimeter = 2* pi * radius;
	acreage = pi * radius * radius;
	printf("Chu vi hinh tron bang: %.2f\n", perimeter);
	printf("Dien tich hinh tron bang: %.2f\n", acreage);
	return 0;
	
}
