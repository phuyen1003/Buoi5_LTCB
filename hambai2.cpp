#include <iostream>
using namespace std;
// Hàm hoán vị vòng tròn cho 3 biến a, b, c
void hoanViVongTron(int& a, int& b, int& c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a, b, c;

    // Nhập giá trị cho các biến a, b, c từ người dùng
    cout << "Nhap gia tri a: ";
    cin >> a;

    cout << "Nhap gia tri b: ";
    cin >> b;

    cout << "Nhap gia tri c: ";
    cin >> c;

    // Thực hiện hoán vị vòng tròn
    hoanViVongTron(a, b, c);

    // In ra màn hình kết quả
    cout << "Sau khi hoan vi vong tron, gia tri cua a, b, c lan luot la: " << a << ", " << b << ", " << c << endl;

    return 0;
}
