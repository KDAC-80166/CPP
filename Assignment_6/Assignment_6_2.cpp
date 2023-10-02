#include<iostream>
using namespace std;

class employee
{
    private:
    int id;
    float salary;

    public:
    employee()
    {
        this->id=0;
        this->salary=0;
    }

    employee(int id,float salary)
    {
        this->id=id;
        this->salary=salary;
    }

    int getid()
    {
        return this->id;
    }

    void setid(int id)
    {
        this->id=id;
    }

    int getsal()
    {
        return this->salary;
    }

    void setsal(float salary)
    {
        this->salary=salary;
    }

    void acceptempdata()
    {
        cout<<"Enter id:"<<endl;
        cin>>this->id;
        cout<<"Enter salary:"<<endl;
        cin>>this->salary;
        
    }

    void displayempdata()
    {
        cout<<"id:"<<this->id<<"\n"<<"salary:"<<this->salary<<endl;
        
    }

};

class manager:virtual public employee
{
    public:
    float bonus;
    
    public:

    manager()
    {
        this->bonus=0;
    }

    manager(float bonus,float salary,int id)
    {
        this->bonus=bonus;
        setsal(salary);
        setid(id);
        
    }

    float getbonus()
    {
        return this->bonus;
    }

    void setbonus(float)
    {
        this->bonus=bonus;
        
    }

    void acceptmanagerdata()
    {
        cout<<"Enter bonus:"<<endl;
        cin>>bonus;
        employee::acceptempdata();
    }

    void displaymanagerdata()
    {
        cout<<"bonus:"<<bonus<<endl;
        employee::displayempdata();
    }

    protected:
    void accept_manager()
    {
        cout<<"Enter bonus:"<<endl;
        cin>>bonus;
    }

    void display_manager()
    {
       cout<<"bonus:"<<bonus<<endl; 
    }
};

class salesman:virtual public employee
{
    public:
    float comm;
    

    salesman()
    {
        this->comm=0;
    }

    salesman(float comm,float salary,int id)
    {
        this->comm=comm;
        setid(id);
        setsal(salary);
    }

    float getcomm()
    {
        return this->comm;
    }

    void setcomm(float comm)
    {
        this->comm=comm;
    }

    void acceptsalesmandata()
    {
        cout<<"Enter comm:"<<endl;
        cin>>comm;
       // employee::acceptempdata();
    }

    void displaysalesmandata()
    {
        cout<<"Commition"<<comm<<endl;
        //employee::displayempdata();
    }

    protected:
    void accept_salesman()
    {
        cout<<"Enter comm:"<<endl;
        cin>>comm;
    }

    void display_salesman()
    {
       cout<<"comm:"<<comm<<endl; 
    }




};

class salesmanager:public manager,public salesman
{
    public:

    salesmanager()
    {

    }

    salesmanager(int id,float salary,float comm,float bonus)
    {
        setid(id);
        setsal(salary);
        setcomm(comm);
        setbonus(bonus);
       
    }

    void acceptdata()
    {
        employee::acceptempdata();
        manager::acceptmanagerdata();
        salesman::acceptsalesmandata();

    }

    void displaydata()
    {
        employee::displayempdata();
        manager::displaymanagerdata();
        salesman::displaysalesmandata();
    }
};

int main()
{
    //salesmanager s1(1,12345,67,76);
   // s1.acceptdata();
    //s1.displaydata();

    //employee e;
    //e.acceptempdata();
    //e.displayempdata();
    manager m(23,45677,2);
   // m.acceptmanagerdata();
    m.displaymanagerdata();

    // salesman s;
    // s.acceptsalesmandata();
    // s.displaysalesmandata();

    //salesmanager r;
    //r.acceptdata();
    //r.displaydata();
}