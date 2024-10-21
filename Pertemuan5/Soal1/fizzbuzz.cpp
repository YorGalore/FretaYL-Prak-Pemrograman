#include <iostream>
#include <vector>
#include <string>
using namespace std;

    vector<string> buildFizzBuzz(int start, int end) {
    vector<string> fizzBuzzList;

    for (int i = start; i <= end; ++i) {
        string result;

        if (i % 3 == 0) {
            result += "Fizz"; }
        if (i % 5 == 0) {
            result += "Buzz"; }
        if (result.empty()) {
            result = to_string(i); }
        fizzBuzzList.push_back(result);}
    return fizzBuzzList; 
    }
    
int main() {
    const int START = 1, END = 100;
    vector<string> fizzBuzz = buildFizzBuzz(START, END);

    for (const auto& entry : fizzBuzz) {
        cout << entry << endl; 
        }
    return 0;
}
