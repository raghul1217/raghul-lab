#include <iostream>
#include <string>
using namespace std;
const int NUM_SUBJECTS = 6;
class Student
{
  int regNumber;
  string name;
  int grades[NUM_SUBJECTS];
  double cgpa;

public:
  void readRegNumber()
  {
    cout << "Enter the register number: ";
    cin >> regNumber;
  }
  void readName()
  {
    cout << "Enter the name: ";
    cin.ignore();
    getline(cin, name);
  }
  void readGrades()
  {
    cout << "Enter the grades for " << NUM_SUBJECTS << " subjects:" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
      cout << "Subject " << i + 1 << ": ";
      cin >> grades[i];
    }
  }
  void calculateCGPA()
  {
    int totalMarks = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
      totalMarks += grades[i];
    }
    cgpa = totalMarks / static_cast<double>(NUM_SUBJECTS);
  }
  void displayDetails() const
  {
    cout << "Register Number: " << regNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Grades:" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
      cout << "Subject " << i + 1 << ": " << grades[i] << endl;
    }
    cout << "CGPA: " << cgpa << endl;
  }
};
int main()
{
  const int NUM_STUDENTS = 3;
  Student students[NUM_STUDENTS];
  for (int i = 0; i < NUM_STUDENTS; i++)
  {
    cout << "Enter details for Student " << i + 1 << ":" << endl;
    students[i].readRegNumber();
    students[i].readName();
    students[i].readGrades();
    students[i].calculateCGPA();
  }
  for (int i = 0; i < NUM_STUDENTS; i++)
  {
    cout << "Details for Student " << i + 1 << ":" << endl;
    students[i].displayDetails();
    cout << endl;
  }
  return 0;
}
