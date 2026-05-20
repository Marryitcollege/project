#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
    string position;
    float baseSalary;
    float deductions; 
};
void inputEmployee(Employee &e) {
    cout << "Enter employee name: ";
    cin >> e.name;

    cout << "Enter position: ";
    cin >> e.position;

    cout << "Enter base salary: ";
    cin >> e.baseSalary;

    cout << "Enter deductions (taxes/insurance): ";
    cin >> e.deductions;
}
float calculateNetSalary(Employee e) {
    return e.baseSalary - e.deductions;
}
void displaySalarySlip(Employee e) {
    cout << "\n--- Employee Payslip ---" << endl;

    cout << "Name: " << e.name << endl;
    cout << "Position: " << e.position << endl;
    cout << "Base Salary: $" << e.baseSalary << endl;
    cout << "Deductions: $" << e.deductions << endl;
    
    cout << "------------------------" << endl;
    cout << "Net Salary (Total): $" << calculateNetSalary(e) << endl;
}

int main() {
    Employee emp;

    inputEmployee(emp); 
    displaySalarySlip(emp);

    return 0;
}
