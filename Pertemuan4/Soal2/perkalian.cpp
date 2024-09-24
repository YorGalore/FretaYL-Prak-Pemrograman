#include <iostream> 
using namespace std;

int main(){
    int a;
    
    cout<<"Masukkan suatu bilangan: ";
    cin>>a;
    
    cout<<"Perkalian tabel untuk "<<a<<" adalah "<<endl;
    for (int i=1; i<=10;++i){
        cout<<a<<" x " <<i<<" = "<< a*i <<endl;
    }
return 0;
}
