#include <stdio.h>
int main()
{
	// Khai bao va khoi tao bien kieu int
	int age = 18; // Kieu du lieu int dung de khai bao cac bien so nguyen
	printf("Tuoi cua ban la: %d\n", age);
	// Khai bao va khoi tao bien kieu float
	float score = 6.75; // Kieu du lieu float dung de khai bao cac bien so thuc
	printf("Gia tri cua score la: %.2f\n", score);
	// Khai bao va khoi tao bien kieu char
	char firstletter = 'D'; // Kieu du lieu char dung de khai bao cac bien ky tu
	printf("Chu cai dau tien trong ten la: %c\n", firstletter);
	// Khai bao va khoi tao bien kieu double
	double pi = 3.141592; // Kieu du lieu double dung de khai bao cac bien co so thuc chinh xac hon float
	printf("Gia tri cua pi la: %.10f\n", pi);
	// Khai bao va khoi tao bien kieu short
	short numbershort = 20; // Kieu du lieu short dung de khai bao cac bien so nguyen co pham vi nho hon int
	printf("So nguyen trong pham vi nho hon int la: %d\n", numbershort);
	// Khai bao va khoi tao bien kieu long
	long numberlong = 1000000; // Kieu du lieu long dung de khai bao cac bien so nguyen co pham vi lon hon int
	printf("So nguyen trong pham vi lon hon int la: %d\n", numberlong);
	
	return 0;
}

