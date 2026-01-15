/******************************************************************************
 * Họ và tên: nguyenquochiep
 * MSSV:      PS48461
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

#include <stdio.h>

int main() {
    float so1, so2;
    float tich, thuong;

    printf("Nhap vao so thu nhat: ");
    scanf("%f", &so1);

    printf("Nhap vao so thu hai: ");
    scanf("%f", &so2);

    tich = so1 * so2;
    thuong = so1 / so2;

    printf("\nTich cua hai so la: %.2f\n", tich);
    
    // Kiem tra neu so thu hai khac 0 thi moi in thuong
    if (so2 != 0) {
        printf("Thuong cua hai so la: %.2f\n", thuong);
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}