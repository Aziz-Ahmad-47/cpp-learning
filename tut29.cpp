#include<iostream>
using namespace std;
class complex 
{
    int a, b;
    public:
    friend complex sum(complex a1, complex b1);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printno()
    {
      cout<<"your no  "<<a <<" and "<< b<<"i"<< endl;
    }

};
  
  complex sum(complex a1, complex b1)
  { 
    complex c1;
    c1.setdata((a1.a + b1.a), (a1.b+ b1.b));
    return c1;
  }
int main()
{
    complex c1,c2,sum1;
    c1.setdata(1, 4);
    c1.printno();

    c2.setdata(2, 3);
    c2.printno();

    sum1 = sum(c1, c2);
    sum1.printno();
    return 0;
}