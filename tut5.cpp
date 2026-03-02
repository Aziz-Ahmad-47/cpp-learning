#include<iostream>
using namespace std;
typedef struct student
{
    string name;
    int roll_no;
    int marks;
}apo;

int main()
{
    apo aziz;
    aziz.name = "aziz ahmad";
    aziz.roll_no= 47;
    aziz.marks=699;
    cout<<"the name of student is "<<aziz.name<<endl;
    cout<<"the roll_no of student is "<<aziz.roll_no<<endl;
    cout<<"the marks of student is "<<aziz.marks<<endl;
    return 0;
}