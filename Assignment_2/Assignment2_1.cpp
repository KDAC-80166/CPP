// Assignment 2
//  Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
//  namespace. Test the functionalities.

#include <iostream>
using namespace std;
namespace NStudent
{

    class Student
    {
    private:
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
            cin >> roll_no;
            cout << "Enter student name=";
            cin >> name;
            cout << "Enter student name=";
            cin >> marks;
        }
        void printStudentOnConsole()
        {
            cout << "student Rollno=" << this->roll_no << endl;
            cout << "student Name=" << this->name << endl;
            cout << "student marks=" << this->marks << endl;
        }
    };
}

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

    NStudent::Student s;
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