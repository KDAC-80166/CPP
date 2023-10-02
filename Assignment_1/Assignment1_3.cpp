// Assignment 1
//  Q3. Write a menu driven program for Student in CPP language. Create a class student with data
//  members roll no, name and marks. Implement the following functions
//  void initStudent();
//  void printStudentOnConsole();
// void acceptStudentFromConsole();

#include <iostream>
using namespace std;
class Student
{
    int roll_no;
    string name;
    int marks;

public:
    void initStudent()
    {
        this->roll_no = 2;
        this->name = "Rutuja";
        this->marks = 400;
    }
    void acceptStudentFromConsole()
    {
        cout << "Enter student roll_no=";
        cin >> this->roll_no;
        cout << "Enter student name=";
        cin >> this->name;
        cout << "Enter student name=";
        cin >> this->marks;
    }
    void printStudentOnConsole()
    {
        cout << "student Rollno=" << this->roll_no << endl;
        cout << "student Name=" << this->name << endl;
        cout << "student marks=" << this->marks << endl;
    }
};
int menu()
{
    int choice;
    cout << "\n*************************************************" << endl;
    cout << "0.exit" << endl;
    cout << "1.Add student" << endl;
    cout << "2.Display  students" << endl;
    cout << "Enter your choice=";
    cin >> choice;
    return choice;
}

int main()
{

    Student s;
    s.initStudent();
    int choice;
    while ((choice = menu()) != 0)

    {

        switch (choice)
        {
        case 1:
            s.acceptStudentFromConsole();
            break;
        case 2:
            s.printStudentOnConsole();
            break;
        default:
            cout << "you enter wrong choice";
            break;
        }
    }
    return 0;
}