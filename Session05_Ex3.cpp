#include <stdio.h>

int main() {
    int n, i, tong = 0;

    // Yeu cau nguoi dung nhap vao mot so nguyen duong
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    // Kiem tra xem so nhap vao co phai la so nguyen duong khong
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1; // Ket thuc chuong trinh neu so khong hop le 
    }

    // Tinh tong tat ca cac so tu 1 den n
    for (i = 1; i <= n; i++) {
        tong += i;
    }

    // In ket qua ra man hinh
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);

    return 0;
}
