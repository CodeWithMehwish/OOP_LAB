#include <iostream>
using namespace std;
struct Student
    // Structure to store student information
{
    int studentID;
    char* studentName;
    char* courseCode;
    char* courseName;
    int courseMarks;
};
int main()
{
    int id, marks;
    char name[50], code[20], course[50];
    cout << " Student Record System" << endl;
    cout << "\nEnter Student ID: ";   // Taking input from user
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Course Code: ";
    cin >> code;
    cout << "Enter Course Name: ";
    cin >> course;
    cout << "Enter Course Marks: ";
    cin >> marks;
    // Creating structure object and storing values
    Student student1 = { id, name, code, course, marks };

    // Displaying stored information
    cout << "Student Details" << endl;
    cout << "Student ID    : " << student1.studentID << endl;
    cout << "Student Name  : " << student1.studentName << endl;
    cout << "Course Code   : " << student1.courseCode << endl;
    cout << "Course Name   : " << student1.courseName << endl;
    cout << "Course Marks  : " << student1.courseMarks << endl;

    return 0;
}