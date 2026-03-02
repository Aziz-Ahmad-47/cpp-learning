#include<iostream>
using namespace std;
class complex
{
private:
    int a, b;
public:
   friend complex sumcomplex(complex q1, complex q2);
    void getdata(int x, int y)
    {
     a = x;
     b = y;
    }
    void setdata()
    {
        cout<<" the sum of pranthesis "<<a<<" and "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex q1, complex q2)
{
    complex q3;
    q3.getdata((q1.a+ q2.a),(q1.b+q2.b));
    return q3;
}

int main()
{
    complex c1, c2, sum;
    c1.getdata(2 , 4);
    c1.setdata();

    c2.getdata(6, 8);
    c2.setdata();
   
    sum = sumcomplex(c1, c2);
    sum.setdata();
     
    return 0;
}