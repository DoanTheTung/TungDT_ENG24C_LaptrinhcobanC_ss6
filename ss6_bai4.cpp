#include <stdio.h> 
#include <math.h>
int main(){
	// Khai bao bien cac so , delta , nghiem so 1 va nghiem so 2
    float a, b, c;
    float delta, nghiem1, nghiem2;

    //Moi nguoi dung nhap vao 3 he so
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    // Kiem tra giá tri cua he so a
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co nghiem bac nhat: x = %.2f\n", x);
        }
    } else {
        // Tinh delta
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            // Phuong trinh co 2 nghiem phan biet
            nghiem1 = (-b + sqrt(delta)) / (2 * a);
            nghiem2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", nghiem1);
            printf("x2 = %.2f\n", nghiem2);
        } else if (delta == 0) {
            // Phuong trinh co nghiem kep
            nghiem1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", nghiem1);
        } else {
            // Phuong trinh vo nghiem
            printf("Phuong trinh vo nghiem.\n");
        }
    }
		return 0;
	}

