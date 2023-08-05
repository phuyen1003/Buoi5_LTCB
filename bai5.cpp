#include<iostream>

using namespace std;

int xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        return 0; // Không xóa được phần tử
    }

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    return 1; // Xóa phần tử thành công
}

int main() {
    int a[100];
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;

    int result = xoaPhanTu(a, n, k);

    if (result == 0) {
        cout << "Khong xoa duoc phan tu!" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
