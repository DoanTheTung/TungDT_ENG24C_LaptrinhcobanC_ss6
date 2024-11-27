#include <stdio.h>

int main() {
	//khai bao va nhap vao gia tri chho n
	int n;
	printf("nhap vao so nguuyen n : ");
	scanf("%d", &n);

	//khai bao bien f1,f2,fn
	int f1 = 0;
	int f2 = 1;
	int fn;
	
	//su dung vong lap for de tao ra day fibonacci
	for(int i=0; i<n; i++){
	//gan fn = f1+f2, f1=f2,f2=fn
	//in ra ket qua
	printf("%d\n", f1);
	fn=f1+f2;
	f1=f2;
	f2=fn;
}
	//ket thuc chuong trinh
    return 0;
}

