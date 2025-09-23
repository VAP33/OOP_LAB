#include <iostream>
using namespace std;
void readNumbers(double &num1, double &num2) {
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
}
double divide(double num1, double num2) {
if (num2 == 0) {
throw "Error: Division by zero is not allowed!";
}
return num1 / num2;
}
int main() {
double a, b, result;
readNumbers(a, b);
try {
result = divide(a, b);
cout << "Result of division: " << result << endl;
}
catch (const char* msg) {
cerr << msg << endl;
}
return 0;
}
