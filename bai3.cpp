#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu trong mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout<<"nhap vao phan tu thu : "<<i;
        cin >> a[i];
    }

    
    int dem[10000] = {0}; 
    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }

  
    cout << "Cac gia tri xuat hien dung 1 lan trong mang:" << endl;
    for (int i = 0; i < n; i++) {
        if (dem[a[i]] == 1) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

