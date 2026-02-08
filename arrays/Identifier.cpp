#include <iostream>
using namespace std;

// Here Car identifier is used to refer to below class
class Car {
    string Brand;
    string model;
    int year;
};

// getSum identifier is used to call the below
// function
void getSum(int a, int b) {
    int _sum = a + b;
    cout << "The sum is: " << _sum;
}

int main() {
  
    // Identifiers used as variable names
    int studentAge = 20;
    double accountBalance = 1000.50;
    string student_Name = "Karan";

    getSum(2, 10);

    return 0;
}