#include <iostream>
using namespace std;

class ResultAnalyzer;   // Forward Declaration

class StudentResult
{
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

public:
    static int totalStudents;

    // Parameterized Constructor
    StudentResult(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        totalStudents++;
    }

    // Friend Class
    friend class ResultAnalyzer;

    // Static Function
    static void showTotalStudents()
    {
        cout << "Total Students Created: " << totalStudents << endl;
    }

    // Destructor
    ~StudentResult()
    {
        cout << "Student Object Destroyed!" << endl;
    }
};

// Initialize Static Data Member
int StudentResult::totalStudents = 0;

class ResultAnalyzer
{
public:
    void analyze(StudentResult &s)
    {
        int total = s.marks1 + s.marks2 + s.marks3;
        float percentage = total / 3.0;

        cout << "Roll No : " << s.rollNo << endl;
        cout << "Name : " << s.name << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result : Pass" << endl;
        else
            cout << "Result : Fail" << endl;
    }
};

int main()
{
    StudentResult s1(101, "Sakshi", 80, 75, 90);

    ResultAnalyzer r;

    r.analyze(s1);

    StudentResult::showTotalStudents();

    return 0;
}