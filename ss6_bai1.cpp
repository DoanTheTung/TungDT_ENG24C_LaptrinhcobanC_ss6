#include<stdio.h>
int main(){
	//Khai bao bien 5 so nguyen va tong
    int num1, num2, num3, num4, num5;
    int sum = 0;

    //Moi nguoi dung nhap vao 5 so nguyen
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    printf("Nhap so thu 3: ");
    scanf("%d", &num3);
    printf("Nhap so thu 4: ");
    scanf("%d", &num4);
    printf("Nhap so thu 5: ");
    scanf("%d", &num5);

    // Kiem tra va tinh tong cac so le
    if (num1 % 2 != 0) sum += num1;
    if (num2 % 2 != 0) sum += num2;
    if (num3 % 2 != 0) sum += num3;
    if (num4 % 2 != 0) sum += num4;
    if (num5 % 2 != 0) sum += num5;

    // In ket qua ra man hinh
    printf("Tong cac so le là: %d\n", sum);
		return 0;
	}

