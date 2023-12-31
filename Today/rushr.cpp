#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    string name;
    int age;
    string position;
};

void createRecord(vector<Employee>& records) {
    Employee emp;
    cout << "Enter employee name: ";
    getline(cin >> ws, emp.name);
    cout << "Enter employee age: ";
    cin >> emp.age;
    cout << "Enter employee position: ";
    getline(cin >> ws, emp.position);

    records.push_back(emp);
    cout << "Employee record created successfully.\n";
}

void listRecords(const vector<Employee>& records) {
    cout << "Employee Records:\n";
    for (size_t i = 0; i < records.size(); ++i) {
        cout << i + 1 << ". Name: " << records[i].name << ", Age: " << records[i].age
             << ", Position: " << records[i].position << endl;
    }
}

void deleteRecord(vector<Employee>& records) {
    int srNo;
    cout << "Enter the SR No. of the employee to delete: ";
    cin >> srNo;

    if (srNo >= 1 && srNo <= static_cast<int>(records.size())) {
        cout << "Are you sure you want to delete this record? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            records.erase(records.begin() + srNo - 1);
            cout << "Employee record deleted successfully.\n";
        }
    } else {
        cout << "Invalid SR No.\n";
    }
}

void modifyRecord(vector<Employee>& records) {
    int srNo;
    cout << "Enter the SR No. of the employee to modify: ";
    cin >> srNo;

    if (srNo >= 1 && srNo <= static_cast<int>(records.size())) {
        cout << "Choose field to modify (1. Name, 2. Age, 3. Position): ";
        int field;
        cin >> field;

        cout << "Enter the new value: ";
        string newValue;
        getline(cin >> ws, newValue);

        switch (field) {
            case 1:
                records[srNo - 1].name = newValue;
                break;
            case 2:
                records[srNo - 1].age = stoi(newValue);
                break;
            case 3:
                records[srNo - 1].position = newValue;
                break;
            default:
                cout << "Invalid field choice.\n";
                return;
        }

        cout << "Employee record modified successfully.\n";
    } else {
        cout << "Invalid SR No.\n";
    }
}

int main() {
    vector<Employee> employeeRecords;

    while (true) {
        cout << "Actions: List, Create\n";
        cout << "Enter action: ";
        string action;
        getline(cin >> ws, action);

        if (action == "Create") {
            createRecord(employeeRecords);
            while (true) {
                cout << "Options: Go back, Create\n";
                cout << "Enter option: ";
                getline(cin >> ws, action);
                if (action == "Go back") {
                    break;
                } else if (action == "Create") {
                    createRecord(employeeRecords);
                } else {
                    cout << "Invalid option.\n";
                }
            }
        } else if (action == "List") {
            listRecords(employeeRecords);
            while (true) {
                cout << "Options: Go back, Delete, Modify\n";
                cout << "Enter option: ";
                getline(cin >> ws, action);
                if (action == "Go back") {
                    break;
                } else if (action == "Delete") {
                    deleteRecord(employeeRecords);
                } else if (action == "Modify") {
                    modifyRecord(employeeRecords);
                } else {
                    cout << "Invalid option.\n";
                }
            }
        } else {
            cout << "Invalid action.\n";
        }
    }

    return 0;
}
