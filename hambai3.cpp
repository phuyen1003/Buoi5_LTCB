#include <iostream>
using namespace std;
int main() {
    int a, b, c, x;

    // Nhập giá trị a, b, c từ người dùng
    cout << "Nhap gia tri a: ";
    cin >> a;

    cout << "Nhap gia tri b: ";
    cin >> b;

    cout << "Nhap gia tri c: ";
    cin >> c;

    // Kiểm tra và nhập giá trị cho x (đảm bảo x nhỏ hơn 100)
    do {
        cout << "Nhap gia tri x (x < 100): ";
        cin >> x;
    } while (x >= 100);

    // Tính giá trị của biểu thức ax^2 + bx + c
    int result = a * x * x + b * x + c;

    // In ra kết quả
    cout << "Gia tri cua bieu thuc " << a << "x^2 + " << b << "x + " << c << " voi x = " << x << " la: " << result << endl;

    return 0;
}
