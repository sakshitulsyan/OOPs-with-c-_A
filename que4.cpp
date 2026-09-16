#include <iostream>
using namespace std;

class University
{
private:
    string universityName;

public:
    // Constructor
    University(string uname)
    {
        universityName = uname;
    }

    // Nested Class
    class Department
    {
    private:
        string departmentName;
        int studentCount;

    public:
        // Constructor
        Department(string dname, int count)
        {
            departmentName = dname;
            studentCount = count;
        }

        // Function to display details
        void display(University &u)
        {
            cout << "University Name : " << u.universityName << endl;
            cout << "Department Name : " << departmentName << endl;
            cout << "Student Count : " << studentCount << endl;
        }
    };
};

int main()
{
    University u("ABES Engineering College");

    University::Department d("AIML", 120);

    d.display(u);

    return 0;
}