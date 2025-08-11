
#include<iostream>
#include<string>
using namespace std;

class bank_account {
private:
    string a, c;
    float b, an;

public:
    // Parameterized constructor to initialize account details
    bank_account(string name, float accno, string atype, float bal);

    // Member functions
    void display();
    void withdraw();
    void deposit();

    // Optional: Function for input via method (not used since constructor handles input)
    // void accept();  // Commented out for now as constructor handles input directly
};

// Constructor definition
bank_account::bank_account(string name, float accno, string atype, float bal) {
    cout << "This is Parameterized Constructor\n";
    a = name;
    an = accno;
    c = atype;
    b = bal;
}

// Display account details
void bank_account::display() {
    cout << "<--------ACCOUNT DETAILS------>" << endl;
    cout << "Hello, " << a << endl;
    cout << "Account Number: " << an << endl;
    cout << "Account Type: " << c << endl;
    cout << "Balance: " << b << endl;
}

// Deposit money
void bank_account::deposit() {
    float dp;
    cout << "Enter the amount to be deposited: ";
    cin >> dp;
    b = b + dp;
}

// Withdraw money
void bank_account::withdraw() {
    float wd;
    cout << "Enter the amount to be withdrawn: ";
    cin >> wd;
    if (wd > b) {
        cout << "Insufficient balance!\n";
    } else {
        b = b - wd;
    }
}

// Optional input function (currently not used)
/*
void bank_account::accept() {
    cout << "Enter Your Name: ";
    cin >> a;
    cout << "Please Enter Your Account Number: ";
    cin >> an;
    cout << "Enter Account Type: ";
    cin >> c;
    cout << "Enter Balance: ";
    cin >> b;
}
*/

int main() {
    string name, atype;
    float accno, bal;

    // Taking initial input via main (to use parameterized constructor)
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Please Enter Your Account Number: ";
    cin >> accno;
    cout << "Enter Account Type: ";
    cin >> atype;
    cout << "Enter Balance: ";
    cin >> bal;

    bank_account X(name, accno, atype, bal);

    int p;
    char q;

    do {
        cout << "\nChoose an option:\n";
        cout << "1. Display\n2. Withdraw\n3. Deposit\n";
        cin >> p;

        switch (p) {
            case 1: X.display(); break;
            case 2: X.withdraw(); break;
            case 3: X.deposit(); break;
            default: cout << "Invalid option!\n"; break;
        }

        cout << "Do you wish to continue? (y/n): ";
        cin >> q;

    } while (q == 'y' || q == 'Y');

    return 0;
}





















OUTPUT

