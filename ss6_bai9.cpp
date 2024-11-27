#include <stdio.h>

int main() {
	// khai bao bien
    int number, hangTram, hangChuc, hangDonvi, sum;

    printf("Cac so Armstrong co 3 chu so la:\n");

    for (number = 100; number <= 999; number++) {
        // tach chu so cua chu so hien thi
        hangTram = number / 100;            
        hangChuc = (number / 10) % 10;      
        hangDonvi = number % 10;             

        // tinh tong lap phuong cua cac chu so
        sum = hangTram * hangTram * hangTram +
              hangChuc * hangChuc * hangChuc +
              hangDonvi * hangDonvi * hangDonvi;

        // kiem tra va in ra man hinh ket qua
        if (sum == number) {
            printf("%d\n", number);
        }
    }
    return 0;
}

