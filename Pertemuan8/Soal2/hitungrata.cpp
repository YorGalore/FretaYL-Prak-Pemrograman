#include <iostream>
using namespace std;

float rata(int angka[], int size) {
    if (size == 0) {
        return 0; 
        }
    return angka[size - 1] + rata(angka, size - 1);
    }

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah harus lebih dari 0." << endl;
        return 1;}

    int angka[n];
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        cin >> angka[i];}
    
    float total = rata(angka, n);
    float rata2 = total / n;
    cout << "Rata-ratanya adalah: " << rata2 << endl;
    return 0;
}
