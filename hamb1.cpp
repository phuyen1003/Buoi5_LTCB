#include <iostream>
#include <cmath> // Thư viện để sử dụng hàm sqrt (căn bậc hai)
using namespace std;
// Hàm tính độ dài cạnh huyền của tam giác vuông
double tinhCanhHuyen(double canhGocVuong1, double canhGocVuong2) {
    double canhHuyen = sqrt(canhGocVuong1 * canhGocVuong1 + canhGocVuong2 * canhGocVuong2);
    return canhHuyen;
}

int main() {
    double canhGocVuong1, canhGocVuong2;

    // Nhập độ dài hai cạnh góc vuông từ người dùng
    cout << "Nhap do dai canh goc vuong 1: ";
    cin >> canhGocVuong1;

    cout << "Nhap do dai canh goc vuong 2: ";
    cin >> canhGocVuong2;

    // Tính và hiển thị kết quả
    double canhHuyen = tinhCanhHuyen(canhGocVuong1, canhGocVuong2);
    cout << "Do dai canh huyen cua tam giac vuong la: " << canhHuyen << endl;

    return 0;
}
