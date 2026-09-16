#include <iostream>
using namespace std;

class Patient
{
private:
    int patientId;
    string patientName;

public:
    static int activePatients;

    // Parameterized Constructor
    Patient(int id, string name)
    {
        patientId = id;
        patientName = name;
        activePatients++;
    }

    // Destructor
    ~Patient()
    {
        activePatients--;
    }

    // Static Member Function
    static void showActivePatients()
    {
        cout << "Active Patients: " << activePatients << endl;
    }
};

// Initialize Static Data Member
int Patient::activePatients = 0;

int main()
{
    Patient::showActivePatients();

    {
        Patient p1(101, "Sakshi");
        Patient p2(102, "Rahul");

        cout << "After Creating Objects:" << endl;
        Patient::showActivePatients();
    } // p1 and p2 are destroyed here

    cout << "After Block Ends:" << endl;
    Patient::showActivePatients();

    return 0;
}