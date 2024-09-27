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

int main() {
    ifstream testFile("test.txt");
    int input;
    string expected_output;

    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && getline(testFile >> ws, expected_output)) {
        string output = jmlbil(input);
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
