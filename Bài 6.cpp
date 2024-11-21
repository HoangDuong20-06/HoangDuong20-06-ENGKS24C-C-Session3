#include<stdio.h>
int main()
{
	// Khai bao edge, height, acreage
	int edge, height, acreage;
	printf("Nhap do dai day: ");
	scanf("%d", &edge);
	printf("Nhap chieu cao: ");
	scanf("%d", &height);
	// Tinh dien tich hinh tam giac
    acreage = (edge*height)/2;
    printf("Dien tich hinh tam giac bang: %d", acreage);
	return 0;
}
