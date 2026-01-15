/******************************************************************************
 * Họ và tên: nguyenquochiep
 * MSSV:      PS48461
 * Lớp:       CS21301
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
 // Khai báo biến
    int so1 = 0, so2 = 0;
    // Nhập dữ liệu
    printf("Hay nhap gia tri cho x : ");
    scanf("%d", &so1);
    
    printf("Hay nhap gia tri cho y : ");
    scanf("%d", &so2);
    // Xử lý, tính toán
    //tinh tich
    int tich = 0;
    tich = so1 * so2;
    printf("Vay gia tri tich cua X va Y la : %d\n", tich);

    // tinh thuong
    int hieu = 0;
    hieu = so1 / so2;
    printf("Vay gia tri thuong cua X va Y la : %d\n", thuong);
    return 0;
} 