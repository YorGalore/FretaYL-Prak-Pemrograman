#include <iostream>
using namespace std;

int main(){
  int a, sum;
    
  sum = 0;
  cout<<"Masukkan sebuah bilangan: ";
  cin>>a;
    
  for (int i=1; i<=a; i++){
    sum += i;
  }
  
  cout<<"Penjumlahan semua bilangan sampai "<<a<<" adalah "<<sum<<endl;

return 0;
}