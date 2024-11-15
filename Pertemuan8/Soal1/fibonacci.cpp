include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) {
        return n;
    } 
    else {
        return fibo(n-1) + fibo(n-2); 
    }
  }

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    if (n < 0) {
        cout << "Nilai n harus berupa bilangan positif atau nol." << endl;} 
    else {
        cout << "Bilangan Fibonacci ke-" << n << " adalah: " << fibo(n) << endl;
        for (int i=0; i<=n; i++){
            cout<<fibo(i);
            if (i<n){
                cout<<",";           
            }
        }
    }
    return 0;
}
