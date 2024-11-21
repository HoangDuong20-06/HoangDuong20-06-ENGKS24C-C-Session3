#include<stdio.h>
int main()
{
	// Khai bao so nguyen va tong
	int n, sum;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &n);
	// Xet dieu kien
	while (n<1000||n>9999){
	printf("So nhap vao khong hop le. Vui long nhap lai. \n");
	scanf("%d",&n);
	}
	//Tinh tong cac chu so
	while (n > 0) {
    sum += n % 10; // Lay chu so cuoi cung
	n /= 10; // Loai bo chu so cuoi cung
    }
    // In ra ket qua
    printf("Tong cua so nguyen co 4 chu so bang: %d", sum);
    return 0;
}
