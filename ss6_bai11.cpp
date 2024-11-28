#include <stdio.h>

int main() {
    int n, count = 0, numb = 2;

    // Moi nguoi dung nhap so nguyen n 
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la:\n");

    // Tim và in n so nguyen to dau tien
    while (count < n) {
        int isPrime = 1; 

        // Kiem tra tinh nguyen to  
        for (int i = 2; i * i <= numb; i++) {
            if (numb % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        // Neu la so nguyen to thi in ra va tang bo dem 
        if (isPrime) {
            printf("%d ", numb);
            count++;
        }

        numb++;
    }

    printf("\n");
    return 0;
}
