
#include <iostream>
#include <string>
using namespace std;

int main()
{
   struct dataBarang {
   string kode, nama;
   double harga;
   int jumlahBarang;
   };

   int n;
   int totalBarang = 0;
   float hargaRata;
   float totalHarga=0;
   cout<<"Masukkan jumlah barang (max 50): ";
   cin>>n;
   dataBarang inputBarang[n];

   if(n>50){
    cout<<"Jumlah melebihi kapasitas."<<endl;
   }
   else if(n<=50){
   for(int i=0; i<n; i++){
   cout<<"\nMasukkan data barang ke-"<<i+1<<endl;
   cout<<"Kode Barang: ";
   cin>>inputBarang[i].kode;
   cin.ignore();
   cout<<"Nama Barang: ";
   getline(cin, inputBarang[i].nama);
   cout<<"Harga Barang: ";
   cin>>inputBarang[i].harga;
   cout<<"Jumlah Barang: ";
   cin>>inputBarang[i].jumlahBarang;
   }

   for(int i=0;i<n;i++){
    totalBarang+=inputBarang[i].jumlahBarang;
   }

   for(int i=0;i<n;i++){
    totalHarga+=inputBarang[i].harga;
   }

   hargaRata=totalHarga/n;
   cout<<"\nData barang: "<<endl;
   cout<<"Jumlah semua barang: "<<totalBarang<<endl;
   cout<<"Rata-rata harga barang: "<<hargaRata<<endl;
   }

   return 0;
}
