#include<iostream>
using namespace std;
class sumno
{
private:
    int a, b, sum;
public:
void getdata(int a1, int b1)
{
   a = a1;
   b = b1;
}
};
class c1 : public sumno
{
public:
void setdata()
{
    return a+b;
}
   void sum()
   {
    cout<<"The sum of the "<< a << "and" << b <<" is "<<setdata(3,5)<<endl;
   }
};
int main()
{
    c1 o;
    o.getdata(3,5);
    o.setdata();
    
    return 0;
}