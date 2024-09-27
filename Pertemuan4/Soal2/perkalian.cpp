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
        string output = perkalian(input);
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
