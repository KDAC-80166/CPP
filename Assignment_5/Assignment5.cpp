/*Q1. Write a menu driven program for Student management.
 In main(), create Array of Objects and provide facility for accept, print, search and sort.
 For student accept name, gender, rollNumber and marks of three subjects from user and print name,
 rollNumber, gender and percentage.
 Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
 sorting and searching array.
Search function returns index of found Student, otherwise returns -1.*/
# include<iostream>
using namespace std;
class student
{
    private:
    string name;
    string gender;
    int rollNumber;
    int marks[3];
    int total;
    float percentage;
    public:
    student()
    {
        this->name="";
        this->gender="";
        this->rollNumber=0;
        

    }
    student(string name,string gender,int rollnumber)
   {
    
        this->name="name";
        this->gender="gender";
        this->rollNumber=rollnumber;
   }
   void accept()
   {
    cout<<"Enter the name of student=";
    cin>>this->name;
    cout<<"Gender of student M/F=";
    cin>>this->gender;
    cout<<"Enter the rollno of student";
    cin>>this->rollNumber;
    cout<<"Enter the marks of three subjects:"<<endl ;
    for(int i=0;i<3;i++)
    {
        cout<<"Subject"<<" "<<i+1<<"=";
        cin>>this->marks[i];
    }

    }
    void print()
    {
        cout<<"Student details:"<<endl;
        cout<<"student name:"<<this->name<<endl;
        cout<<"student gender:"<<this->gender<<endl;
        cout<<"student rollno:"<<this->rollNumber<<endl;
        for(int i=0;i<3;i++)
    {
        cout<<"Marks of student "<<"["<<i+1<<"]=";
        cout<<this->marks[i];
        cout<<endl;
    }
      int total = 0;
        for (int i = 0; i < 3; i++)
        {
            total = total + marks[i];
        }
        int percent = (total / 3);
        cout << "percent =" << percent << "%" << endl;
    }
    void getMarks()
    {
        for(int i=0;i<3;i++)
        {
            cout<<marks[i];
        }
    } 
    friend void SearchRecords(student arr[],int size);
    friend void SortRecords(student arr[],int size);
   };

 void SearchRecords(student arr[],int size)
 {
  int rollno;
  cout<<"Enter the rollno you want to search:";
  cin>>rollno;
  for(int i=0;i<size;i++)
  {
    if(arr[i].rollNumber==rollno)
    {
        cout<<"student is found at index"<<i<<endl;
        break;
    }
  }
 }
 void SortRecords(student arr[],int size)
{
int i,j,min;
student temp;
for(i=0;i<size-1;i++)
{
    min=i;
    for(j=i+1;j<size;j++)
    {
        min=i;
        if(arr[j].rollNumber<arr[min].rollNumber)
        {
            min=j;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
}
int menu()
{
    int choice;
    cout<<"Enter your choice:"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.accept studentDetails"<<endl;
    cout<<"2.display studentDetails"<<endl;
    cout<<"3. searching"<<endl;
    cout<<"4.Sorting"<<endl;
    cin>>choice;
    return choice;
    
}
int main()
    {   
         int size;
        cout<<"Enter the capacity of class ";
        cin >> size;
        student s[size];
         int counter = 0;
        int choice;
        while((choice=menu())!=0)
        {
            switch(choice)
            {
                case 1 :
                 if(counter<size){
                    s[counter].accept();
                    counter++;}
                else
                    cout<<"no seat available";
                    break;
                 
                case 2 :
                for(int i=0;i<counter;i++){
                   s[i].print();}
                    break;
                case 3 :
                    SearchRecords(s,counter);
                    break;
                case 4 :
                    SortRecords(s,counter);
                    break;
                 default:
                 cout<<"you enter the wrong choice";
                 break;
                 

            }
        }
     return 0;
     }
    
