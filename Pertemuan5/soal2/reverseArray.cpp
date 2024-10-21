#include <iostream>
#include <vector>
using namespace std;
    vector<int> reverseVector(const vector<int>& inputVec) {
    vector<int> reversedVec;
    reversedVec.reserve(inputVec.size()); 

    for (int i = inputVec.size() - 1; i >= 0; --i) {
        reversedVec.push_back(inputVec[i]);
    }
    return reversedVec;
}
void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
int main() {
    vector<int> originalVec = {3, 4, 5, 6, 7};
    cout << "Vektor Asli: ";
    printVector(originalVec);
    vector<int> reversedVec = reverseVector(originalVec);
    cout << "Vektor Terbalik: ";
    printVector(reversedVec);
    return 0;
}
