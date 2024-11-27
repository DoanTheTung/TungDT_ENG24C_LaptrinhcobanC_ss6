#include<stdio.h>
int main(){
	//khai bao bien mat khau va ma nguoi dung nhap 
	const int matKhau = 1234;
    int maDoan;

    //Moi nguoi dung nhap mat khau
    printf("Nhap mat khau (co 4 so): ");
    scanf("%d", &maDoan);

    // Kiem tra mat khau va in ra man hinh 
    if (maDoan == matKhau) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }
		return 0;
	}

