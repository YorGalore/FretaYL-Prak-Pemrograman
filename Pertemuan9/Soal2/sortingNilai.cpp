#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data siswa
struct Siswa {
    long long NISN;
    string Nama;
    int Nilai;
};

// Fungsi untuk menampilkan data
void hasilData(Siswa data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "NISN: "<< data[i].NISN << "\t" << "Nama: "<< data[i].Nama << "\t" << "Nilai: "<<data[i].Nilai << endl;
    }
    cout << endl;
}

// Insertion Sort
void insertionSort(Siswa data[], int n) {
    for (int i = 1; i < n; i++) {
        Siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].Nilai > key.Nilai) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(Siswa data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j].Nilai < data[minIndex].Nilai) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// Bubble Sort
void bubbleSort(Siswa data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j].Nilai > data[j + 1].Nilai) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

int main() {
    Siswa data[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum pengurutan:\n";
    hasilData(data, n);
    
    Siswa data1[n], data2[n], data3[n];
    copy(data, data + n, data1);
    copy(data, data + n, data2);
    copy(data, data + n, data3);
    
    cout << "\nPengurutan dengan metode Penyisipan:\n";
    insertionSort(data1, n);
    hasilData(data1, n); 
    cout << "\nPengurutan dengan metode Seleksi:\n";
    selectionSort(data2, n);
    hasilData(data2, n);
    cout << "\nPengurutan dengan metode Gelembung:\n";
    bubbleSort(data3, n);
    hasilData(data3, n);

    return 0;
}
