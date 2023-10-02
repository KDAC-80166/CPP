// Q2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
// Instead of char[] use string datatype

#include <iostream>
using namespace std;
class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address() // paramaterless
    {
        cout << "inside parameterless constructor";
        this->building = "girija";
        this->street = "bus stand";
        this->city = "solapur";
        this->pin = 413007;
    }

    void accept()
    {
        cout << "Enter building name=";
        cin >> building;
        cout << "Enter street name=";
        cin >> street;
        cout << "Enter city name=";
        cin >> city;
        cout << "Enter pin=";
        cin >> pin;
    }
    void display()
    {
        cout << "Building name=" << this->building << endl;
        cout << "Street name=" << this->street << endl;
        cout << "city name=" << this->city << endl;
        cout << "pin_no=" << this->pin << endl;
    }

    void setPin(int pin)
    {
        this->pin = pin;
    }
    int getPin()
    {
        cout << "pin number=" << this->pin << endl;

        return this->pin;
    }
};
int menu()
{
    int choice;
    cout << "******************************************************************\n";
    cout << "0.EXIT" << endl;
    cout << "1.accept" << endl;
    cout << "2.display" << endl;
    cout << "3.setter" << endl;
    cout << "4.getter" << endl;

    cout << "Enter your choice";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    Address A;
    while ((choice = menu()) != 0)
    {

        switch (choice)

        {
        case 1:
            A.accept();
            break;
        case 2:
            A.display();
            break;
        case 3:
            A.setPin(248802);
            break;
        case 4:
            A.getPin();
            break;
        default:
            cout << "you enter wrong choice;";
            break;
        }
    }
    return 0;
}