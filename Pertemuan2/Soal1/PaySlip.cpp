// The real first C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama; int salary; 
   
    cout << "Hi! What is your name? ";
    getline (cin, nama);
    cout << "Insert your gross salary: ";
    cin >> salary;
    int tax = 0.2*salary; 
    int installment = 0.05*salary;
    int insurance = 0.06*salary;
    int net_salary = salary - tax - installment - insurance;
    
    cout << "\nPayslip for YorGalore Employee" << endl;
    cout << "-------------------------------" << endl;
    cout << "Name: " << nama << endl;
    cout << "Gross Salary: Rp " << salary << endl;
    cout << "Tax (20%):Rp " << tax << endl;
    cout << "Installment: Rp " << installment << endl;
    cout << "Insurance: Rp " << insurance << endl;
    cout << "Net Salary: " << net_salary << endl;
    
    return 0;  
}