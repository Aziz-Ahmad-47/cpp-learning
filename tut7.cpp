#include<iostream>
using namespace std;
typedef struct student
{
    string name;
    int rollno;
    float marks;
}se;

int main()
{
   se s;
   s.name = "sanaullah akhonzada"; 
   s.rollno = 48;
   s.marks = 11000.1;

   cout<<s.name<<endl;
   cout<<s.rollno<<endl;
   cout<<s.marks<<endl;
    return 0;
}