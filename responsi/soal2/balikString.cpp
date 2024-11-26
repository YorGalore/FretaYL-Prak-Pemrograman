#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    //cout<<"Masukkan kalimat: ";
    //getline(cin, s);
    s = "Freta Yordinia Laura";
    
    cout<<"Reversed kalimatnya adalah: ";
    for (int i=s.size(); i>=0; i--){
        cout<< s[i];
    }
return 0;
}
