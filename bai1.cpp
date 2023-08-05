#include <iostream>
#include <conio.h>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num - 1; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    // Nhập số lượng phần tử của dãy
    cout << "Nhap so luong phan tu cua day: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu khong hop le. Ket thuc chuong trinh.";
        return 1;
    }

    // Cấp phát mảng động với kích thước n
    
    int* arr = new int[n];

    // Nhập dãy tăng dần từ người dùng
    cout << "Nhap vao day tang dan:\n";

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        if (i > 0 && arr[i] <= arr[i - 1]) {
            cout << "Day nhap vao khong tang dan. Hay nhap lai phan tu thu " << (i + 1) << ": ";
            --i; // Nhập lại phần tử không đúng yêu cầu
        }
    }

    // Xuất các số nguyên tố có trong mảng
    cout << "Cac so nguyen to co trong mang la: ";
    for (int i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }

    // Giải phóng bộ nhớ đã cấp phát cho mảng động
    delete[] arr;

    return 0;
}
