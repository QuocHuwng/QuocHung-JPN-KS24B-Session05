#include <stdio.h>

int main() {
    int n;

    // Yeu cau nguoi dung nhap vào mot so nguyen duong tu 1 den 10
    printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
    scanf("%d", &n);

    // Kiem tra xem so nhap vao co nam trong khoang tu 1 den 10 khong
    if (n < 1 || n > 10) {
        printf("Vui long nhap mot so tu 1 den 10.\n");
        return 1; // Ket thuc chuong trinh neu so khong hop le 
    }

    // In ra bang cuu chuong tuong ung voi so nhap
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
