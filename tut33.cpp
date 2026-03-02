#include<iostream>
#include<string.h>
using namespace std;
// inheritane in OPP
// public inheritance
class student
{
private:
    string name;
protected:
    int rollno;
public:
    string department; 
};
// info class
class info: public student{
  void set_data(int b, string c){
            // a=name;
            rollno=b;
            department=c;
  }
  void display()
  {
    // cout<<"name of student is "<<name<<endl;
    // cout<<"rollno of student is "<<rollno<<endl;
    cout<<"department of student is "<<department<<endl;
  }
};

int main()
{
   info s;
//    cout<<s.rollno;
  cout<<"enter name of your department ";
   cin>>s.department;
   cout<<"your depar is "<<s.department;
//    s.display();
    return 0;
}