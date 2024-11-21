#include<stdio.h>
int main()
{
	//Khai bao diemtoan, diemvan, diemanh, sum, average
	float diemtoan, diemvan, diemanh, sum, average;
	printf("Nhap diem toan: ");
	scanf("%f", &diemtoan);
	printf("Nhap diem van: ");
	scanf("%f", &diemvan);
	printf("Nhap diem anh: ");
	scanf("%f", &diemvan);
    // Tinh sum  & average
    sum = diemtoan + diemvan + diemanh;
    printf("Tong diem la: %.2f\n", sum);
    average = sum / 3;
    printf("Diem trung binh la: %.2f", average);
    return 0;
}
