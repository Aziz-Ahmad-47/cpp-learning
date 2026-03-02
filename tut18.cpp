#include<iostream>
using namespace std;
class employ
{
private:
    int a;
    int b,c;
public: 
    int d,e;
    void salary(int a1,int b1,int c1)
    {
    a= a1;
    b= b1;
    c= c1;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};

int main()
{
    employ e;
    e.d=100;
    e.e=20;
    e.salary(20,40,50);
    e.display();
    return 0;
}