// Write a C++ program to store the monthly salaries of employees in a vector<double>. Use a range-based for loop with auto to:

// Display all employee salaries.
// Calculate the total salary expense.
// Find the highest salary.
// Count how many employees have a salary greater than ₹50,000.
// Calculate the average salary.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> salary = {55000.30, 70000.25, 44000.20, 78000.33, 82000.90};

    double total = 0;
    double highest = salary[0];
    int c= 0;

    cout << "Employee Salaries:" << endl;

    for (auto s : salary){
         cout << s << endl;
        total += s;
        if (s > highest){
            highest = s;
        }
        if (s > 50000){
            c++;
        }
    }

double avg = total / salary.size();

    cout << "total Salary = " << total << endl;
    cout << "highest Salary = " << highest << endl;
    cout << "employees with salary > 50000 = " << c << endl;
    cout << "average Salary = " << avg << endl;

    return 0;
}