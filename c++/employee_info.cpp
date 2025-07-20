#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

public:
    // Constructor
    Employee() {
        name = "";
        id = 0;
        salary = 0.0;
    }

    // Input employee data
    void inputData() {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter salary: ";
        cin >> salary;

        cin.ignore(); // Clear input buffer
    }

    // Display employee data
    void displayData() {
        cout << "\nEmployee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    Employee* ptr = &emp;

    ptr->inputData();      // Using pointer to call input method
    ptr->displayData();    // Using pointer to call display method

    return 0;
}
