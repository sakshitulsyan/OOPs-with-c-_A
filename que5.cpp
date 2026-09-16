#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeId;
    string name;
    float salary;

public:
    // Default Constructor
    Employee()
    {
        employeeId = 0;
        name = "Not Assigned";
        salary = 0;
    }

    // Parameterized Constructor
    Employee(int id, string n, float s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    // Copy Constructor
    Employee(const Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Salary Update Function
    void updateSalary(float s)
    {
        salary = s;
    }

    // Const Member Function
    void display() const
    {
        cout << "Employee ID : " << employeeId << endl;
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    // Const Object
    const Employee e1(101, "Sakshi", 50000);

    cout << "Const Employee Details:" << endl;
    e1.display();

    // Copy Constructor
    Employee e2 = e1;

    cout << "\nCopied Employee Details:" << endl;
    e2.display();

    // Update salary of copied object
    e2.updateSalary(60000);

    cout << "\nAfter Salary Update:" << endl;
    e2.display();

    // This is not allowed because e1 is a const object
    // e1.updateSalary(70000);

    return 0;
}