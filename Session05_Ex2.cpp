#include <stdio.h>

int main() {
    int so_duoc_gan = 42; // Khai bao va gan gia tri cho bien so nguyen
    int so_nhap;

    printf("So duoc gan la: %d\n", so_duoc_gan);
    printf("Nhap so (nhap %d de thoat): ", so_duoc_gan);

    // Vong lap yeu cau nguoi dung nhap cho den khi nhap ðung so 
    do {
        scanf("%d", &so_nhap);
        if (so_nhap != so_duoc_gan) {
            printf("So nhap khong dung, vui long nhap lai: ");
        }
    } while (so_nhap != so_duoc_gan);

    printf("Ban da nhap dung so: %d. Chao mung ban!\n", so_nhap);

    return 0;
}
