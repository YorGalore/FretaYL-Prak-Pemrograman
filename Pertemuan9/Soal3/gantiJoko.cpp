#include <iostream>
#include <string>
using namespace std;

struct Siswa{
    long long NISN;
    string Nama;
    int Nilai;
};

void hasilData(Siswa data[], int n){
    for (int i=0; i<n; i++){
        cout<<"NISN: " << data[i].NISN << "\tNama: " << data[i].Nama << "\tNilai: " << data[i].Nilai << endl;
    }
}

void insertionSort(Siswa data[], int n) {
    for (int i = 1; i < n; i++) {
        Siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].NISN > key.NISN) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void selectionSort(Siswa data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j].NISN < data[minIndex].NISN) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

void bubbleSort(Siswa data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j].NISN > data[j + 1].NISN) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

int binarySearch(Siswa data[], int n, long long target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid].NISN == target) {
            return mid;
        } else if (data[mid].NISN < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // untuk data yang tidak ditemukan karena left udah 0 
}

void ubahNama(Siswa data[], int n, int targetNilai, const string& namaBaru) {
    for (int i = 0; i < n; i++) {
        if (data[i].Nilai == targetNilai) {
            data[i].Nama = namaBaru;
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
    Siswa data1[n], data2[n], data3[n];
    copy(data, data + n, data1);
    copy(data, data + n, data2);
    copy(data, data + n, data3);

    cout << "\nMengubah nama siswa dengan nilai 60 menjadi 'Joko':\n";
    ubahNama(data1, n, 60, "Joko");
    hasilData(data1, n);

return 0;
}
