
#include <iostream>
#include <string>
using namespace std;

struct dataBarang {
   string kode, nama;
   double harga, hargaRata;
   int jumlahBarang;
   };

void runTest1(){
  cout<< "Run Test 1"<<endl;
  
  int n = 4;
  dataBarang inputBarang[n] = {
  {"123", "Doremi", "123000", "1"}, {"234", "Remifa", "234000", "2"}, 
  {"345", "Mifasol", "345000", "3"},{"456", "Fasolla", "456000", "4"}
  };
  
  int totalBarang = 0;
  double totalHarga = 0;

  for (int i = 0; i < n; i++) {
    totalBarang += inputBarang[i].jumlahBarang;
    totalHarga += inputBarang[i].harga;
    }

  hargaRata = totalHarga/n;
  cout<<"\nData barang: "<<endl;
  cout<<"Jumlah semua barang: "<<totalBarang<<endl;
  cout<<"Rata-rata harga barang: "<<hargaRata<<endl;

  if(totalBarang == 10 && hargaRata == 289500){
    cout<< "Run Test 1 Passed" << endl;
  }
  else{
    cout<< "Run Test 1 Failed" << endl;
  }
}

void runTest2(){
  cout<< "Run Test 2"<<endl;
  
  int n = 2;
  dataBarang inputBarang[n] = {
  {"2341", "JJ", "20930", "3"}, {"2342", "JK", "20930", "2"}, 
  };
  
  int totalBarang = 0;
  double totalHarga = 0;

  for (int i = 0; i < n; i++) {
    totalBarang += inputBarang[i].jumlahBarang;
    totalHarga += inputBarang[i].harga;
    }

  hargaRata = totalHarga/n;
  cout<<"\nData barang: "<<endl;
  cout<<"Jumlah semua barang: "<<totalBarang<<endl;
  cout<<"Rata-rata harga barang: "<<hargaRata<<endl;

  if(totalBarang == 5 && hargaRata == 20930){
    cout<< "Run Test 2 Passed" << endl;
  }
  else{
    cout<< "Run Test 2 Failed" << endl;
  }
}

int main(){
  runTest1();
  runTest2();
  
  return 0;
}
