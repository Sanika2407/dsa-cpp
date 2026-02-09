/*
    Topic: Variables in C++
    Covers:
    1) Variable definition (declaration) and initialization
    2) Accessing and updating
    3) Multiple variables of same type
    4) Type-safety note (int vs decimal)
    5) Using variables in expressions (addition)
    6) Copying one variable's value into another
    7) Constant variables (const)
    8) Rules for naming variables (shown via valid examples + invalid examples in comments)
*/

#include <iostream>
using namespace std;

int main() {

    // ------------------------------------------------------------
    // 1) Creating (defining) variables
    // Syntax: type name;
    // ------------------------------------------------------------
    int num;            // declaration (may contain garbage value until initialized)
    num = 3;            // initialization using '='

    cout << "num initially = " << num << endl;

    // Definition + initialization in one step:
    int numOneStep = 5;
    cout << "numOneStep = " << numOneStep << endl;

    // Multiple variables of same type:
    int a = 10, b = 20, c;   // c declared but not initialized
    c = 30;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // ------------------------------------------------------------
    // 2) Accessing and Updating a variable
    // Access: use the name
    // Update: use '=' assignment operator
    // ------------------------------------------------------------
    int value = 3;
    cout << "value before update = " << value << endl;

    value = 7; // updating
    cout << "value after update = " << value << endl;

    // ------------------------------------------------------------
    // 3) Type-safety Note:
    // You should assign same type value to variable.
    // Example: int cannot store decimal properly.
    // ------------------------------------------------------------
    // int wrong = 3.14; // ❌ Not recommended (will either give warning/error or truncate)
    double pi = 3.14;   // ✅ correct type for decimal
    cout << "pi (double) = " << pi << endl;

    // ------------------------------------------------------------
    // 4) How variables are used: copying one variable's value
    // ------------------------------------------------------------
    int num1 = 10, num2;
    num2 = num1; // Assigning num1's value to num2
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // ------------------------------------------------------------
    // 5) Using variables in expressions (Addition)
    // ------------------------------------------------------------
    cout << "10 + 20 = " << (10 + 20) << endl;     // direct literals
    cout << "num1 + b = " << (num1 + b) << endl;   // using variables

    // ------------------------------------------------------------
    // 6) Constant Variables (const)
    // Value cannot be changed after initialization
    // ------------------------------------------------------------
    const int fixed = 10;
    cout << "fixed (const) = " << fixed << endl;

    // fixed = 15; // ❌ error: assignment of read-only variable

    // ------------------------------------------------------------
    // 7) Rules for Naming Variables (Identifiers)
    // ✅ Allowed: letters, digits, underscore
    // ✅ Must start with letter or underscore
    // ✅ Case-sensitive
    // ❌ No spaces or special characters
    // ❌ Can't use C++ keywords
    // ------------------------------------------------------------

    int _rollNo = 71;        // ✅ starts with underscore
    int marks1 = 95;         // ✅ contains digit (not at start)
    int Marks1 = 90;         // ✅ different from marks1 (case-sensitive)

    cout << "_rollNo = " << _rollNo << endl;
    cout << "marks1 = " << marks1 << ", Marks1 = " << Marks1 << endl;

    // Invalid examples (kept in comments):
    // int 1marks = 10;       // ❌ cannot start with digit
    // int total marks = 50;  // ❌ whitespace not allowed
    // int total# = 20;       // ❌ special char not allowed
    // int class = 5;         // ❌ keyword not allowed

    return 0;
}
