#include<stdio.h>
int main(){
	//Khai bao bien 5 so nguyen va bien luu so chan , so le
	int num1, num2, num3, num4, num5;
    int soChan = 0, soLe = 0;

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

    // Kiem tra và dem so chan, so le
    if (num1 % 2 == 0) soChan++; else soLe++;
    if (num2 % 2 == 0) soChan++; else soLe++;
    if (num3 % 2 == 0) soChan++; else soLe++;
    if (num4 % 2 == 0) soChan++; else soLe++;
    if (num5 % 2 == 0) soChan++; else soLe++;

    // In ket qua ra man hinh
    printf("So luong so chan: %d\n", soChan);
    printf("So luong so le: %d\n", soLe);
		return 0;
	}

