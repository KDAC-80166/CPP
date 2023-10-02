#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }
    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
     int get_day()
     {
         return this->day;
     }
      void set_day(int day)
     {
       this->day=day;
     }
    
     int get_month()
     {
         return this->month;
     }
      void set_month(int month)
     {
       this->month=month;
     }
     int get_year()
     {
         return this->year;
     }
      void set_year(int year)
     {
       this->year=year;
     }

    void acceptDate()
    {
        cout<<"Enter the day=";
        cin>>this->day;
        cout<<"Enter the month=";
        cin>>this->month;
        cout<<"Enter the year=";
        cin>>this->year;
    }
    void displayDate()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<year<<endl;
    }
     bool isLeapYear()
    {
        cout << "Enter a year"<<endl;
        cin >> this->year;

        if (year % 400 == 0)

            return 1;
        else if (year % 100 == 0)
        {
            return 0;
        }
        else if (year % 4 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
};
class person
{  
    private:
    string name;
    string addr;
    Date dob;
    public:
    person()
    {
        this->name="";
        this->addr="";
    }
    person(string name,string addr,int day,int month,int year)//:dob(day,month,year)
    {
        this->name=name;
        this->addr=addr;

    }
    string get_name()
    {
        return this->name;
    }
     void set_name(string name)
     {
        this->name=name;
     }
     string get_addr()
    {
        return this->addr;
    }
     void set_addr(string name)
     {
        this->addr=addr;
     }
     void acceptperson()
     {
      cout<<"Enter the name="<<endl;
      cin>>this->name;
      cout<<"Enter the address"<<endl;
      cin>>this->addr;  
      dob.acceptDate();
     }
  void displayperson()  
  {
    cout<<"name="<<this->name<<endl;
    cout<<"Address="<<this->addr<<endl;
    cout<<"date of birth = ";
    dob.displayDate();
   

    
  } 
};
class employee
{
    private:
    int id;
    float sal;
    string dept;
    Date doj;
    public:
    employee()
    {
        this->id=0;
        this->sal=0;
        this->dept="";
        }
     employee(int id,float sal,string dept,int day,int month,int year)//:doj(day,month,year)
     {
        this->id=id;
        this->sal=sal;
        this->dept=dept;
        doj.set_day(day);
        doj.get_day();
        doj.set_month(month);
        doj.get_month();
        doj.set_year(year);
        doj.get_year();
     }
     int get_id()
    {
        return this->id;
    }
     void set_id(int id)
     {
        this->id=id;
     }
    float get_sal()
    {
        return this->sal;
    } 
     void set_sal(float sal)
     {
        this->sal=sal;
     }
     string get_dept()
    {
        return this->dept;
    } 
     void set_dept(string dept)
     {
        this->dept=dept;
     }
     void acceptemployee()
     {
        cout<<"Enter the employee id=";
        cin>>this->id;
        cout<<"Enter the employee sal=";
        cin>>this->sal;
        cout<<"Enter the employee dept=";
        cin>>this->dept;
        
        doj.acceptDate();
        
     }
     void displayemployee()
     {
        cout<<"employee id="<<this->id<<endl;
        cout<<"employee salary="<<this->sal<<endl;
        cout<<"employee department="<<this->dept<<endl;
        cout<<"employee joining date=";
    
        

        doj.displayDate();
     }

};
int main()
{
     Date d1(25,5,2023);
     d1.acceptDate();
     d1.displayDate();
     cout << "checkLeapyear"<< "\n";
            if (d1.isLeapYear())
                cout<<"Is a leap yr"<<endl;

            else
                 cout<<"Is not a leap yr"<<endl;
            
    

    person p("Rutu","Solapur",25,5,1996);
    p.acceptperson();
    p.displayperson();
    employee e(1,4786,"solapur",25,5,2000);
    e.acceptemployee();
    e.displayemployee();
   
   
}