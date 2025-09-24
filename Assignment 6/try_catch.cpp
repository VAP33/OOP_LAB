#include <iostream>
using namespace std;

double calculatePercentage(double obtained, double total) {
    if (total == 0) {
        throw "Error: Total marks cannot be zero!";
    }
    if (obtained > total) {
        throw "Error: Obtained marks cannot be greater than total marks!";
    }
    if (obtained < 0 || total < 0) {
        throw "Error: Marks cannot be negative!";
    }
    return (obtained / total) * 100;
}

int main() {
    double obtained, total, percentage;

    cout << "Enter obtained marks: ";
    cin >> obtained;
    cout << "Enter total marks: ";
    cin >> total;

    try {
        percentage = calculatePercentage(obtained, total);
        cout << "Percentage = " << percentage << "%" << endl;
    }
    catch (const char* msg) {
        cerr << "Exception caught! " << msg << endl;
    }

    cout << "--- Program finished safely ---" << endl;
    return 0;
}
