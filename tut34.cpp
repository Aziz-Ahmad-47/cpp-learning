#include<iostream>
using namespace std;
class c1
{
private:
int x,y;
public:
void getdata()
{
    cout<<"The value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;
}
c1()
{
    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;
}
~c1(){
    cout<<" memory is free "<<endl;
}
};
int main()
{
   c1 c;
   c.getdata();
   c.~c1();
    return 0;
}