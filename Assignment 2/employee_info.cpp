/*Name: Vedant Pathak
PRN: B24CE1097 S.E.2
Assignment 2: Employee Information System
Problem Statement: Develop a program in C++ to create a database of an
employee's information system containing the following fields: Name, employee ID,
Department, Date of Joining, Contact address, Telephone number etc. Construct the database
with suitable member functions to accept and print employee details. Make use of constructor
types, destructor, static members, inline function and dynamic memory allocation using
operators-new and delete.*/
#include<iostream>
using namespace std;

class Employee {
private:
    // Employee details
    string name, department, dateOfJoining, address, phoneNumber;
    int employeeID; 
    static int count; // counts total employees

public:
    // Constructors
    Employee(); // default constructor
    Employee(string name, int e_ID, string dep, string date, string addr, string num); // parameterized
    Employee(Employee &x); // copy constructor

    // Small inline function for title
    inline void title() {
        cout << "------Welcome to Employee Information System------";
    }

    // Destructor
    ~Employee() {
        cout << "Number of Objects Destroyed: " << count << endl;
        count--;
    }

    // Display function
    void display();
};

int Employee::count = 0; // initialize static variable

// Default constructor
Employee::Employee() {
    cout << "--------------Default Constructor-----------\n";
    name = "Peter Parker";
    employeeID = 3234;
    department = "Web Designing";
    dateOfJoining = "18/9/2023";
    address = "Forest Hills, Queens, New York City";
    phoneNumber = "+1 345 723435";
    count++;
}

// Parameterized constructor
Employee::Employee(string name, int e_ID, string dep, string date, string addr, string num) {
    cout << "\n----------------Parameterized Constructor--------------\n";
    this->name = name;
    this->employeeID = e_ID;
    department = dep;
    dateOfJoining = date;
    address = addr;
    phoneNumber = num;
    count++;
}

// Copy constructor
Employee::Employee(Employee &x) {
    cout << "\n---------------Copy Constructor------------\n";
    name = x.name;
    employeeID = x.employeeID;
    department = x.department;
    dateOfJoining = x.dateOfJoining;
    address = x.address;
    phoneNumber = x.phoneNumber;
    count++;
}

// Display function
void Employee::display() {
    cout << "\nTHE EMPLOYEE DETAILS ARE AS FOLLOWS:\n";
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << employeeID << endl; // int printing
    cout << "Department: " << department << endl;
    cout << "Date of Joining: " << dateOfJoining << endl;
    cout << "Address: " << address << endl;
    cout << "Telephone Number: " << phoneNumber << endl;
    cout << "Total Employees Created: " << count << endl;
}

int main() {
    // Default employee
    Employee X;
    X.title();
    X.display();

    // Parameterized employee
    Employee X2("Mary Jane", 5678, "Marketing", "15/07/25", "XYZ Corp", "912345678");
    X2.display();

    // Copy employee
    Employee X3(X2);
    X3.display();

    // Dynamic allocation
    Employee *ptr = new Employee("Tony Stark", 7777, "Sales", "01/01/2020", "Stark Tower, NY", "+1 987 654321");
    ptr->title();
    ptr->display();

    delete ptr; // free memory

    return 0;
}
