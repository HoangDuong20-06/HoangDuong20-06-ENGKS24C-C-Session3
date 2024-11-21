#include<stdio.h>
int main()
{
	// Khai bao ten cua ban
	char ten[100];
	printf("Nhap ten cua ban: ");
	scanf("%s", &ten);
	// In ten ra man hinh roi man hinh in ra xin chao (ten)
	printf("Xin chao: %s", ten);
	return 0;
}
