#include<iostream>
using namespace std;

// Base class for all staff members
class Staff {
protected:
    string name, dept;  // Common attributes: name and department
    int id;             // Unique staff ID
public:
    void accept1();     // Function to take basic staff details
    void display1();    // Function to display basic staff details
};

// Function to accept staff details
void Staff::accept1() {
    cout << "\nName: ";
    cin >> name;   // (only one word will be taken)
    cout << "\nDepartment: ";
    cin >> dept;
    cout << "\nID: ";
    cin >> id;
}

// Function to display staff details
void Staff::display1() {
    cout << "\nName: " << name << endl;
    cout << "\nDepartment: " << dept << endl;
    cout << "\nID: " << id << endl;
}

// Derived class Teacher from Staff
class Teacher : public Staff {
private:
    string subject;   // Subject teacher teaches
    int experience;   // Years of experience
public:
    void accept2();   // Input teacher details
    void display2();  // Show teacher details
};

// Accept teacher details
void Teacher::accept2() {
    accept1();   // First get general staff details
    cout << "\nSubject: ";
    cin >> subject;
    cout << "\nExperience (In Years): ";
    cin >> experience;
}

// Display teacher details
void Teacher::display2() {
    display1();   // Show basic staff details
    cout << "\nSubject: " << subject << endl;
    cout << "\nExperience (In Years): " << experience << endl;
}

// Derived class Support Staff from Staff
class Support_Staff : public Staff {
    string area_of_support;   // e.g. lab, office, library
public:
    void accept3();   // Input support staff details
    void display3();  // Show support staff details
};

// Accept support staff details
void Support_Staff::accept3() {
    accept1();   // First get general staff details
    cout << "\nEnter Area of Support: ";
    cin >> area_of_support;
}

// Display support staff details
void Support_Staff::display3() {
    display1();   // Show basic staff details
    cout << "\nArea of Support: " << area_of_support << endl;
}

// Main program
int main() {
    int q, n;  // q = choice, n = number of staff members
    char p;    // For continue/exit
    while (1) {
        cout << "Choose: (1.Teacher 2.Support Staff ): ";
        cin >> q;
        
        switch (q) {
        case 1: {
            cout << "\n------Teacher Staff------" << endl;
            cout << "\nEnter Number of Teachers: ";
            cin >> n;
            
            Teacher arr[n];   // Create array of Teacher objects
            for (int i = 0; i < n; i++) {
                cout << "\nEnter Details for Teacher " << i + 1 << endl;
                arr[i].accept2();
            }
            for (int i = 0; i < n; i++) {
                cout << "\n\n-------Details for Teacher " << i + 1 << " are -------" << endl;
                arr[i].display2();
            }
            break;
        }
        case 2: {
            cout << "\n------Support Staff------" << endl;
            cout << "Enter Number of Staff: ";
            cin >> n;
            
            Support_Staff arr1[n];   // Create array of Support Staff objects
            for (int i = 0; i < n; i++) {
                cout << "\nEnter Details for Staff Member " << i + 1 << endl;
                arr1[i].accept3();
            }
            for (int i = 0; i < n; i++) {
                cout << "\n\n-------Details for Staff Member " << i + 1 << " are -------" << endl;
                arr1[i].display3();
            }
            break;
        }
        }
        cout << "Do you wish to continue?(y/n): ";
        cin >> p;
        if (p == 'n' || p == 'N') {
            cout << "Thank You for Using College Management System!\n";
            break;
        }
    }
    return 0;
}
