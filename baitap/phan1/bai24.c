#include "stdio.h"

int main(){

    // Nhập vào điểm Toán, Lý, Hóa, in ra điểm trung bình.

    float diemToan = 0, diemLy = 0, diemHoa = 0;
    printf("Nhap diem toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem hoa: ");
    scanf("%f", &diemHoa);

    printf("Diem trung binh cua 3 mon la: %.1f", (diemToan + diemLy + diemHoa)/3);

    return 0;
}