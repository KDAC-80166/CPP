#include <iostream>
using namespace std;

class Time
{
    private:
    int hrs;
    int min;
    int sec;
    public:
Time()
{

}
Time(int h,int m,int s){
    this->hrs=h;
    this->min=m;
    this->sec=s;
}
void getHour(){
    cout<<this->hrs<<endl;


}
void getMinute(){
        cout<<this->min<<endl;
}
void getSeconds(){
    cout<<this->sec<<endl;
}

void setHour(int hrs){
    this->hrs=hrs;
}
void setMinute(int min){
this->min=min;
}
void setSeconds(int sec){
this->sec=sec;
}
void printTime(){
    cout<<this->hrs<<" : "<<this->min<<":"<<this->sec<<endl;
}

void accepTime(){
    cout<<"Enter a hrs"<<endl;
    cin>>this->hrs;
    cout<<"Enter a min"<<endl;
    cin>>this->min;   
    cout<<"Enter a sec"<<endl;
    cin>>this->sec;
}
};

int main(){
Time **arr = new Time *[2];
// arr[0]=new Time(2,5,10);
// arr[1]=new Time(3,5,10);

for(int i=0;i<2;i++)
{
    arr[i]=new Time();
}
for(int i=0;i<2;i++){
    arr[i]->accepTime();

    //cout<<endl;
}
for(int i=0;i<2;i++){
   
    arr[i]->printTime();
    //cout<<endl;
}

for(int i=0;i<2;i++){
delete arr[i];
}

delete[] arr;
    //cout<<endl;
// delete[] arr;


}
